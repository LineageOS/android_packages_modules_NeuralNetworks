// Generated from cast.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_8() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_9() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_9() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_10() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_10() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_11() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_11() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_12() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_12() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_13() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_13() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_9() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_9() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT16,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_9(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_14() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_14() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_10() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_10() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_10(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_7() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_15() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_15() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_15(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_11() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_11() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_INT32,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_11(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_16() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_16() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_16(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_12() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_12() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::TEMPORARY_VARIABLE,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0, 0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2, 3},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {1},
            .numberOfConsumers = 1,
            .scale = 4.0f,
            .zeroPoint = 100,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      100, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_12(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_17() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_17() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_17(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_13() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_13() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_13(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_18() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_18() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_18(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_14() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_14() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_all_inputs_as_internal_dynamic_output_shape_14(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_8() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_8() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_relaxed_dynamic_output_shape_8(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_7() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
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
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::ADD,
            .inputs = {2, 3, 4},
            .outputs = {0},
        },
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {2};
    const std::vector<uint32_t> outputIndexes = {1};
    std::vector<uint8_t> operandValues = {
      0, 0, 0, 0, 0, 0, 0, 0
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

bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_19() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {2},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_19() {
    const std::vector<Operand> operands = {
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
            .type = OperandType::TENSOR_QUANT8_ASYMM,
            .dimensions = {0},
            .numberOfConsumers = 0,
            .scale = 4.0f,
            .zeroPoint = 100,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::CAST,
            .inputs = {0},
            .outputs = {1},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {1};
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

bool is_ignored_dynamic_output_shape_19(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast
