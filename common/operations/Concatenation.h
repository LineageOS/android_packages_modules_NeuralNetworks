/*
 * Copyright (C) 2017 The Android Open Source Project
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

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_CONCATENATION_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_CONCATENATION_H

#include "OperationsUtils.h"

namespace android::nn::concatenation {

constexpr char kOperationName[] = "CONCATENATION";

constexpr uint32_t kNumOutputs = 1;
constexpr uint32_t kOutputTensor = 0;

Result<Version> validate(const IOperationValidationContext* context);

}  // namespace android::nn::concatenation

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_COMMON_OPERATIONS_CONCATENATION_H
