/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <vector>

#include "OperationsUtils.h"
#include "UnidirectionalSequenceRNN.h"

namespace android::nn {
namespace unidirectional_sequence_rnn {

Result<Version> validate(const IOperationValidationContext* context) {
    NN_RET_CHECK_EQ(context->getNumInputs(), kNumInputs);
    const int numOutputs = context->getNumOutputs();
    NN_RET_CHECK(numOutputs == kNumOutputs || numOutputs == kNumOutputsWithState);
    OperandType inputType = context->getInputType(kInputTensor);
    if (inputType != OperandType::TENSOR_FLOAT16 && inputType != OperandType::TENSOR_FLOAT32) {
        return NN_ERROR() << "Unsupported input operand type for UNIDIRECTIONAL_SEQUENCE_RNN op: "
                          << inputType;
    }
    NN_RET_CHECK(validateInputTypes(context, {inputType, inputType, inputType, inputType, inputType,
                                              OperandType::INT32, OperandType::INT32}));
    std::vector<OperandType> outputTypes = {inputType};
    Version minVersionSupported = kVersionFeatureLevel3;
    if (numOutputs == kNumOutputsWithState) {
        minVersionSupported = kVersionFeatureLevel4;
        outputTypes.push_back(inputType);
    }
    NN_RET_CHECK(validateOutputTypes(context, outputTypes));
    return minVersionSupported;
}

}  // namespace unidirectional_sequence_rnn

NN_DEFINE_VALIDATION_FUNCTION(UNIDIRECTIONAL_SEQUENCE_RNN, unidirectional_sequence_rnn::validate);

}  // namespace android::nn
