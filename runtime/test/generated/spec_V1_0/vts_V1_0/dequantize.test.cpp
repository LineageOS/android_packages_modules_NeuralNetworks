// Generated from dequantize.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"


namespace generated_tests::dequantize {

const ::test_helper::TestModel& get_test_model();

} // namespace generated_tests::dequantize

namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize {

TEST_F(GeneratedTest, dequantize) {
    Execute(device, ::generated_tests::dequantize::get_test_model());
}

TEST_F(ValidationTest, dequantize) {
    const Model model = createModel(::generated_tests::dequantize::get_test_model());
    const Request request = createRequest(::generated_tests::dequantize::get_test_model());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize


namespace generated_tests::dequantize {

const ::test_helper::TestModel& get_test_model_all_inputs_as_internal();

} // namespace generated_tests::dequantize

namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize {

TEST_F(GeneratedTest, dequantize_all_inputs_as_internal) {
    Execute(device, ::generated_tests::dequantize::get_test_model_all_inputs_as_internal());
}

TEST_F(ValidationTest, dequantize_all_inputs_as_internal) {
    const Model model = createModel(::generated_tests::dequantize::get_test_model_all_inputs_as_internal());
    const Request request = createRequest(::generated_tests::dequantize::get_test_model_all_inputs_as_internal());
    validateEverything(model, request);
}

} // namespace android::hardware::neuralnetworks::V1_0::generated_tests::dequantize
