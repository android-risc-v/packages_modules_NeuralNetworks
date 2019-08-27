// Generated from minimum.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 2, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 2, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_int32(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_int32_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      127, 0, 0, 0, 0, 100, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_all_inputs_as_internal(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      127, 0, 0, 0, 0, 100, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 2, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 2, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 2},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_int32_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_int32_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      127, 0, 0, 0, 0, 100, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_all_inputs_as_internal_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0, 0},
            .numberOfConsumers = 0,
            .scale = 2.0f,
            .zeroPoint = 80,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {3, 1, 2},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 0.5f,
            .zeroPoint = 127,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      127, 0, 0, 0, 0, 100, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0, 1};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {};
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      128, 0, 0, 0, 0, 128, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 0.5f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 1, .length = 4},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 1.0f,
            .zeroPoint = 128,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 5, .length = 1},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 6, .length = 4},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {3, 4, 5},
            .outputs = {0},
        },
        {
            .type = OperationType::ADD,
            .inputs = {6, 7, 8},
            .outputs = {1},
        },
        {
            .type = OperationType::MINIMUM,
            .inputs = {0, 1},
            .outputs = {2},
        }
    };

    const std::vector<uint32_t> inputIndexes = {3, 6};
    const std::vector<uint32_t> outputIndexes = {2};
    std::vector<uint8_t> operandValues = {
      128, 0, 0, 0, 0, 128, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum
