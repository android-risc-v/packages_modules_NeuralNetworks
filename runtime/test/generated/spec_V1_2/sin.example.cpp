// Generated from sin.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::sin {

const TestModel& get_test_model() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-6.0f, -5.9f, -5.8f, -5.7f, -5.6f, -5.5f, -5.4f, -5.3f, -5.2f, -5.1f, -5.0f, -4.9f, -4.8f, -4.7f, -4.6f, -4.5f, -4.4f, -4.3f, -4.2f, -4.1f, -4.0f, -3.9f, -3.8f, -3.7f, -3.6f, -3.5f, -3.4f, -3.3f, -3.2f, -3.1f, -3.0f, -2.9f, -2.8f, -2.7f, -2.6f, -2.5f, -2.4f, -2.3f, -2.2f, -2.1f, -2.0f, -1.9f, -1.8f, -1.7f, -1.6f, -1.5f, -1.4f, -1.3f, -1.2f, -1.1f, -1.0f, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.27941549819892586f, 0.373876664830236f, 0.46460217941375737f, 0.5506855425976376f, 0.6312666378723216f, 0.7055403255703919f, 0.7727644875559871f, 0.8322674422239013f, 0.8834546557201531f, 0.9258146823277325f, 0.9589242746631385f, 0.9824526126243325f, 0.9961646088358407f, 0.9999232575641008f, 0.9936910036334644f, 0.977530117665097f, 0.951602073889516f, 0.9161659367494549f, 0.8715757724135882f, 0.8182771110644103f, 0.7568024953079282f, 0.6877661591839738f, 0.6118578909427189f, 0.5298361409084934f, 0.44252044329485246f, 0.35078322768961984f, 0.2555411020268312f, 0.1577456941432482f, 0.058374143427580086f, -0.04158066243329049f, -0.1411200080598672f, -0.23924932921398243f, -0.3349881501559051f, -0.4273798802338298f, -0.5155013718214642f, -0.5984721441039565f, -0.675463180551151f, -0.7457052121767203f, -0.8084964038195901f, -0.8632093666488737f, -0.9092974268256817f, -0.9463000876874145f, -0.9738476308781951f, -0.9916648104524686f, -0.9995736030415051f, -0.9974949866040544f, -0.9854497299884601f, -0.963558185417193f, -0.9320390859672263f, -0.8912073600614354f, -0.8414709848078965f, -0.7833269096274834f, -0.7173560908995228f, -0.644217687237691f, -0.5646424733950354f, -0.479425538604203f, -0.3894183423086505f, -0.29552020666133955f, -0.19866933079506122f, -0.09983341664682815f, 0.0f, 0.09983341664682815f, 0.19866933079506122f, 0.29552020666133955f, 0.3894183423086505f, 0.479425538604203f, 0.5646424733950354f, 0.644217687237691f, 0.7173560908995228f, 0.7833269096274834f, 0.8414709848078965f, 0.8912073600614354f, 0.9320390859672263f, 0.963558185417193f, 0.9854497299884601f, 0.9974949866040544f, 0.9995736030415051f, 0.9916648104524686f, 0.9738476308781951f, 0.9463000876874145f, 0.9092974268256817f, 0.8632093666488737f, 0.8084964038195901f, 0.7457052121767203f, 0.675463180551151f, 0.5984721441039565f, 0.5155013718214642f, 0.4273798802338298f, 0.3349881501559051f, 0.23924932921398243f, 0.1411200080598672f, 0.04158066243329049f, -0.058374143427580086f, -0.1577456941432482f, -0.2555411020268312f, -0.35078322768961984f, -0.44252044329485246f, -0.5298361409084934f, -0.6118578909427189f, -0.6877661591839738f, -0.7568024953079282f, -0.8182771110644103f, -0.8715757724135882f, -0.9161659367494549f, -0.951602073889516f, -0.977530117665097f, -0.9936910036334644f, -0.9999232575641008f, -0.9961646088358407f, -0.9824526126243325f, -0.9589242746631385f, -0.9258146823277325f, -0.8834546557201531f, -0.8322674422239013f, -0.7727644875559871f, -0.7055403255703919f, -0.6312666378723216f, -0.5506855425976376f, -0.46460217941375737f, -0.373876664830236f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::SIN
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model = TestModelManager::get().add("sin", get_test_model());

}  // namespace generated_tests::sin

namespace generated_tests::sin {

const TestModel& get_test_model_relaxed() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = true,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({-6.0f, -5.9f, -5.8f, -5.7f, -5.6f, -5.5f, -5.4f, -5.3f, -5.2f, -5.1f, -5.0f, -4.9f, -4.8f, -4.7f, -4.6f, -4.5f, -4.4f, -4.3f, -4.2f, -4.1f, -4.0f, -3.9f, -3.8f, -3.7f, -3.6f, -3.5f, -3.4f, -3.3f, -3.2f, -3.1f, -3.0f, -2.9f, -2.8f, -2.7f, -2.6f, -2.5f, -2.4f, -2.3f, -2.2f, -2.1f, -2.0f, -1.9f, -1.8f, -1.7f, -1.6f, -1.5f, -1.4f, -1.3f, -1.2f, -1.1f, -1.0f, -0.9f, -0.8f, -0.7f, -0.6f, -0.5f, -0.4f, -0.3f, -0.2f, -0.1f, 0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f, 1.0f, 1.1f, 1.2f, 1.3f, 1.4f, 1.5f, 1.6f, 1.7f, 1.8f, 1.9f, 2.0f, 2.1f, 2.2f, 2.3f, 2.4f, 2.5f, 2.6f, 2.7f, 2.8f, 2.9f, 3.0f, 3.1f, 3.2f, 3.3f, 3.4f, 3.5f, 3.6f, 3.7f, 3.8f, 3.9f, 4.0f, 4.1f, 4.2f, 4.3f, 4.4f, 4.5f, 4.6f, 4.7f, 4.8f, 4.9f, 5.0f, 5.1f, 5.2f, 5.3f, 5.4f, 5.5f, 5.6f, 5.7f, 5.8f, 5.9f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<float>({0.27941549819892586f, 0.373876664830236f, 0.46460217941375737f, 0.5506855425976376f, 0.6312666378723216f, 0.7055403255703919f, 0.7727644875559871f, 0.8322674422239013f, 0.8834546557201531f, 0.9258146823277325f, 0.9589242746631385f, 0.9824526126243325f, 0.9961646088358407f, 0.9999232575641008f, 0.9936910036334644f, 0.977530117665097f, 0.951602073889516f, 0.9161659367494549f, 0.8715757724135882f, 0.8182771110644103f, 0.7568024953079282f, 0.6877661591839738f, 0.6118578909427189f, 0.5298361409084934f, 0.44252044329485246f, 0.35078322768961984f, 0.2555411020268312f, 0.1577456941432482f, 0.058374143427580086f, -0.04158066243329049f, -0.1411200080598672f, -0.23924932921398243f, -0.3349881501559051f, -0.4273798802338298f, -0.5155013718214642f, -0.5984721441039565f, -0.675463180551151f, -0.7457052121767203f, -0.8084964038195901f, -0.8632093666488737f, -0.9092974268256817f, -0.9463000876874145f, -0.9738476308781951f, -0.9916648104524686f, -0.9995736030415051f, -0.9974949866040544f, -0.9854497299884601f, -0.963558185417193f, -0.9320390859672263f, -0.8912073600614354f, -0.8414709848078965f, -0.7833269096274834f, -0.7173560908995228f, -0.644217687237691f, -0.5646424733950354f, -0.479425538604203f, -0.3894183423086505f, -0.29552020666133955f, -0.19866933079506122f, -0.09983341664682815f, 0.0f, 0.09983341664682815f, 0.19866933079506122f, 0.29552020666133955f, 0.3894183423086505f, 0.479425538604203f, 0.5646424733950354f, 0.644217687237691f, 0.7173560908995228f, 0.7833269096274834f, 0.8414709848078965f, 0.8912073600614354f, 0.9320390859672263f, 0.963558185417193f, 0.9854497299884601f, 0.9974949866040544f, 0.9995736030415051f, 0.9916648104524686f, 0.9738476308781951f, 0.9463000876874145f, 0.9092974268256817f, 0.8632093666488737f, 0.8084964038195901f, 0.7457052121767203f, 0.675463180551151f, 0.5984721441039565f, 0.5155013718214642f, 0.4273798802338298f, 0.3349881501559051f, 0.23924932921398243f, 0.1411200080598672f, 0.04158066243329049f, -0.058374143427580086f, -0.1577456941432482f, -0.2555411020268312f, -0.35078322768961984f, -0.44252044329485246f, -0.5298361409084934f, -0.6118578909427189f, -0.6877661591839738f, -0.7568024953079282f, -0.8182771110644103f, -0.8715757724135882f, -0.9161659367494549f, -0.951602073889516f, -0.977530117665097f, -0.9936910036334644f, -0.9999232575641008f, -0.9961646088358407f, -0.9824526126243325f, -0.9589242746631385f, -0.9258146823277325f, -0.8834546557201531f, -0.8322674422239013f, -0.7727644875559871f, -0.7055403255703919f, -0.6312666378723216f, -0.5506855425976376f, -0.46460217941375737f, -0.373876664830236f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT32,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::SIN
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::UNKNOWN,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_relaxed = TestModelManager::get().add("sin_relaxed", get_test_model_relaxed());

}  // namespace generated_tests::sin

namespace generated_tests::sin {

const TestModel& get_test_model_float16() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .isRelaxed = false,
        .main = {
                .inputIndexes = {0},
                .operands = {{
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({-6.0f, -5.900000095367432f, -5.800000190734863f, -5.699999809265137f, -5.599999904632568f, -5.5f, -5.400000095367432f, -5.300000190734863f, -5.199999809265137f, -5.099999904632568f, -5.0f, -4.900000095367432f, -4.800000190734863f, -4.699999809265137f, -4.599999904632568f, -4.5f, -4.400000095367432f, -4.300000190734863f, -4.199999809265137f, -4.099999904632568f, -4.0f, -3.9000000953674316f, -3.799999952316284f, -3.700000047683716f, -3.5999999046325684f, -3.5f, -3.4000000953674316f, -3.299999952316284f, -3.200000047683716f, -3.0999999046325684f, -3.0f, -2.9000000953674316f, -2.799999952316284f, -2.700000047683716f, -2.5999999046325684f, -2.5f, -2.4000000953674316f, -2.299999952316284f, -2.200000047683716f, -2.0999999046325684f, -2.0f, -1.899999976158142f, -1.7999999523162842f, -1.7000000476837158f, -1.600000023841858f, -1.5f, -1.399999976158142f, -1.2999999523162842f, -1.2000000476837158f, -1.100000023841858f, -1.0f, -0.8999999761581421f, -0.800000011920929f, -0.699999988079071f, -0.6000000238418579f, -0.5f, -0.4000000059604645f, -0.30000001192092896f, -0.20000000298023224f, -0.10000000149011612f, 0.0f, 0.10000000149011612f, 0.20000000298023224f, 0.30000001192092896f, 0.4000000059604645f, 0.5f, 0.6000000238418579f, 0.699999988079071f, 0.800000011920929f, 0.8999999761581421f, 1.0f, 1.100000023841858f, 1.2000000476837158f, 1.2999999523162842f, 1.399999976158142f, 1.5f, 1.600000023841858f, 1.7000000476837158f, 1.7999999523162842f, 1.899999976158142f, 2.0f, 2.0999999046325684f, 2.200000047683716f, 2.299999952316284f, 2.4000000953674316f, 2.5f, 2.5999999046325684f, 2.700000047683716f, 2.799999952316284f, 2.9000000953674316f, 3.0f, 3.0999999046325684f, 3.200000047683716f, 3.299999952316284f, 3.4000000953674316f, 3.5f, 3.5999999046325684f, 3.700000047683716f, 3.799999952316284f, 3.9000000953674316f, 4.0f, 4.099999904632568f, 4.199999809265137f, 4.300000190734863f, 4.400000095367432f, 4.5f, 4.599999904632568f, 4.699999809265137f, 4.800000190734863f, 4.900000095367432f, 5.0f, 5.099999904632568f, 5.199999809265137f, 5.300000190734863f, 5.400000095367432f, 5.5f, 5.599999904632568f, 5.699999809265137f, 5.800000190734863f, 5.900000095367432f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_INPUT,
                            .numberOfConsumers = 1,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }, {
                            .channelQuant = {},
                            .data = TestBuffer::createFromVector<_Float16>({0.279415488243103f, 0.3738766610622406f, 0.46460217237472534f, 0.5506855249404907f, 0.6312666535377502f, 0.7055402994155884f, 0.7727645039558411f, 0.8322674632072449f, 0.8834546804428101f, 0.925814688205719f, 0.9589242935180664f, 0.9824526309967041f, 0.9961646199226379f, 0.9999232292175293f, 0.9936910271644592f, 0.9775301218032837f, 0.9516021013259888f, 0.9161659479141235f, 0.8715757727622986f, 0.81827712059021f, 0.756802499294281f, 0.6877661347389221f, 0.6118578910827637f, 0.529836118221283f, 0.4425204396247864f, 0.35078322887420654f, 0.2555411159992218f, 0.15774568915367126f, 0.05837414413690567f, -0.04158066213130951f, -0.14112000167369843f, -0.2392493337392807f, -0.33498814702033997f, -0.42737987637519836f, -0.5155013799667358f, -0.5984721183776855f, -0.6754631996154785f, -0.7457051873207092f, -0.8084964156150818f, -0.8632093667984009f, -0.9092974066734314f, -0.9463000893592834f, -0.9738476276397705f, -0.9916648268699646f, -0.9995735883712769f, -0.9974949955940247f, -0.9854497313499451f, -0.9635581970214844f, -0.9320390820503235f, -0.8912073373794556f, -0.8414709568023682f, -0.7833269238471985f, -0.7173560857772827f, -0.6442176699638367f, -0.5646424889564514f, -0.4794255495071411f, -0.3894183337688446f, -0.29552021622657776f, -0.19866932928562164f, -0.0998334139585495f, 0.0f, 0.0998334139585495f, 0.19866932928562164f, 0.29552021622657776f, 0.3894183337688446f, 0.4794255495071411f, 0.5646424889564514f, 0.6442176699638367f, 0.7173560857772827f, 0.7833269238471985f, 0.8414709568023682f, 0.8912073373794556f, 0.9320390820503235f, 0.9635581970214844f, 0.9854497313499451f, 0.9974949955940247f, 0.9995735883712769f, 0.9916648268699646f, 0.9738476276397705f, 0.9463000893592834f, 0.9092974066734314f, 0.8632093667984009f, 0.8084964156150818f, 0.7457051873207092f, 0.6754631996154785f, 0.5984721183776855f, 0.5155013799667358f, 0.42737987637519836f, 0.33498814702033997f, 0.2392493337392807f, 0.14112000167369843f, 0.04158066213130951f, -0.05837414413690567f, -0.15774568915367126f, -0.2555411159992218f, -0.35078322887420654f, -0.4425204396247864f, -0.529836118221283f, -0.6118578910827637f, -0.6877661347389221f, -0.756802499294281f, -0.81827712059021f, -0.8715757727622986f, -0.9161659479141235f, -0.9516021013259888f, -0.9775301218032837f, -0.9936910271644592f, -0.9999232292175293f, -0.9961646199226379f, -0.9824526309967041f, -0.9589242935180664f, -0.925814688205719f, -0.8834546804428101f, -0.8322674632072449f, -0.7727645039558411f, -0.7055402994155884f, -0.6312666535377502f, -0.5506855249404907f, -0.46460217237472534f, -0.3738766610622406f}),
                            .dimensions = {1, 2, 3, 4, 5},
                            .isIgnored = false,
                            .lifetime = TestOperandLifeTime::SUBGRAPH_OUTPUT,
                            .numberOfConsumers = 0,
                            .scale = 0.0f,
                            .type = TestOperandType::TENSOR_FLOAT16,
                            .zeroPoint = 0
                        }},
                .operations = {{
                            .inputs = {0},
                            .outputs = {1},
                            .type = TestOperationType::SIN
                        }},
                .outputIndexes = {1}
            },
        .minSupportedVersion = TestHalVersion::V1_2,
        .referenced = {}
    };
    return model;
}

const auto dummy_test_model_float16 = TestModelManager::get().add("sin_float16", get_test_model_float16());

}  // namespace generated_tests::sin

