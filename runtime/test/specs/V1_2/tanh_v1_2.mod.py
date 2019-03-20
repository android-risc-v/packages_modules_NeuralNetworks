#
# Copyright (C) 2019 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# TEST 1
input0 = Input("input0", "TENSOR_FLOAT16", "{1, 2, 2, 1}")
output0 = Output("output0", "TENSOR_FLOAT16", "{1, 2, 2, 1}")

model = Model().Operation("TANH", input0).To(output0)

Example({
    input0: [-1, 0, 1, 10],
    output0: [-.761594156, 0, .761594156, 0.999999996],
})


# TEST 2
input_scale, input_offset = 0.05, 100
output_scale, output_offset = 1.0 / 128, 128  # Required.

def dequantize(x):
  return (x - input_offset) * input_scale

def quantize(x):
  return max(0, min(255, int(round(x / output_scale)) + output_offset))

input0 = Input("input0", "TENSOR_QUANT8_ASYMM", "{256}, %g, %d" % (input_scale, input_offset))
output0 = Output("output0", "TENSOR_QUANT8_ASYMM", "{256}, %g, %d" % (output_scale, output_offset))
model = Model().Operation("TANH", input0).To(output0)

input_values = list(range(256))
output_values = [quantize(math.tanh(dequantize(x))) for x in input_values]

Example({
    input0: input_values,
    output0: output_values,
})


# TEST 3: zero-sized input

# Use BOX_WITH_NMS_LIMIT op to generate a zero-sized internal tensor for box cooridnates.
p1 = Parameter("scores", "TENSOR_FLOAT32", "{1, 2}", [0.90, 0.10]) # scores
p2 = Parameter("roi", "TENSOR_FLOAT32", "{1, 8}", [1, 1, 10, 10, 0, 0, 10, 10]) # roi
o1 = Output("scoresOut", "TENSOR_FLOAT32", "{0}") # scores out
o2 = Output("classesOut", "TENSOR_INT32", "{0}") # classes out
tmp1 = Internal("roiOut", "TENSOR_FLOAT32", "{0, 4}") # roi out
tmp2 = Internal("batchSplitOut", "TENSOR_INT32", "{0}") # batch split out
model = Model("zero_sized").Operation("BOX_WITH_NMS_LIMIT", p1, p2, [0], 0.3, 0.4, -1).To(o1, tmp1, o2, tmp2)

# Use ROI_ALIGN op to convert into zero-sized feature map.
layout = BoolScalar("layout", False) # NHWC
i1 = Input("in", "TENSOR_FLOAT32", "{1, 1, 1, 1}")
zero_sized = Internal("featureMap", "TENSOR_FLOAT32", "{0, 2, 2, 1}")
model = model.Operation("ROI_ALIGN", i1, tmp1, tmp2, 2, 2, 2.0, 2.0, 4, 4, layout).To(zero_sized)

# TANH op with numBatches = 0.
o3 = Output("out", "TENSOR_FLOAT32", "{0, 2, 2, 1}") # out
model = model.Operation("TANH", zero_sized).To(o3)

quant8 = DataTypeConverter().Identify({
    p1: ("TENSOR_QUANT8_ASYMM", 0.1, 128),
    p2: ("TENSOR_QUANT16_ASYMM", 0.125, 0),
    o1: ("TENSOR_QUANT8_ASYMM", 0.1, 128),
    tmp1: ("TENSOR_QUANT16_ASYMM", 0.125, 0),
    i1: ("TENSOR_QUANT8_ASYMM", 0.1, 128),
    zero_sized: ("TENSOR_QUANT8_ASYMM", 0.1, 128),
    o3: ("TENSOR_QUANT8_ASYMM", 1.0 / 128, 128)
})

# Create test case with dummy values.
Example({
    i1: [1],
    o1: [0],
    o2: [0],
    o3: [0],
}).AddVariations("relaxed", quant8, "float16")
