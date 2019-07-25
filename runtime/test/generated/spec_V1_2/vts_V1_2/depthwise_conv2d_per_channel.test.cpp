// Generated from depthwise_conv2d_per_channel.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same();
bool is_ignored_same(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_same) {
  Execute(device,
          createTestModel_same,
          is_ignored_same,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same) {
  const Model model = createTestModel_same();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_dynamic_output_shape();
bool is_ignored_same_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_dynamic_output_shape) {
  Execute(device,
          createTestModel_same_dynamic_output_shape,
          is_ignored_same_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_dynamic_output_shape) {
  const Model model = createTestModel_same_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_inputs_as_internal();
bool is_ignored_same_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal) {
  Execute(device,
          createTestModel_same_all_inputs_as_internal,
          is_ignored_same_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal) {
  const Model model = createTestModel_same_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_same_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_same_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_same_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_same_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_tensors_as_inputs();
bool is_ignored_same_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_same_all_tensors_as_inputs,
          is_ignored_same_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs) {
  const Model model = createTestModel_same_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_same_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_same_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_same_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_same_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_same_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different();
bool is_ignored_different(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_different) {
  Execute(device,
          createTestModel_different,
          is_ignored_different,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different) {
  const Model model = createTestModel_different();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_dynamic_output_shape();
bool is_ignored_different_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_dynamic_output_shape) {
  Execute(device,
          createTestModel_different_dynamic_output_shape,
          is_ignored_different_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_dynamic_output_shape) {
  const Model model = createTestModel_different_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_inputs_as_internal();
bool is_ignored_different_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal) {
  Execute(device,
          createTestModel_different_all_inputs_as_internal,
          is_ignored_different_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal) {
  const Model model = createTestModel_different_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_different_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_different_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_different_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_different_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_tensors_as_inputs();
bool is_ignored_different_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_different_all_tensors_as_inputs,
          is_ignored_different_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs) {
  const Model model = createTestModel_different_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_different_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_different_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_different_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_different_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_different_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc();
bool is_ignored_layout_nhwc(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nhwc) {
  Execute(device,
          createTestModel_layout_nhwc,
          is_ignored_layout_nhwc,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc) {
  const Model model = createTestModel_layout_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_dynamic_output_shape();
bool is_ignored_layout_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nhwc_dynamic_output_shape,
          is_ignored_layout_nhwc_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_layout_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_inputs_as_internal();
bool is_ignored_layout_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_layout_nhwc_all_inputs_as_internal,
          is_ignored_layout_nhwc_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_layout_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_layout_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_layout_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_layout_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_tensors_as_inputs();
bool is_ignored_layout_nhwc_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_layout_nhwc_all_tensors_as_inputs,
          is_ignored_layout_nhwc_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs) {
  const Model model = createTestModel_layout_nhwc_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nhwc_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw();
bool is_ignored_layout_nchw(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nchw) {
  Execute(device,
          createTestModel_layout_nchw,
          is_ignored_layout_nchw,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw) {
  const Model model = createTestModel_layout_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_dynamic_output_shape();
bool is_ignored_layout_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nchw_dynamic_output_shape,
          is_ignored_layout_nchw_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_dynamic_output_shape) {
  const Model model = createTestModel_layout_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_inputs_as_internal();
bool is_ignored_layout_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_layout_nchw_all_inputs_as_internal,
          is_ignored_layout_nchw_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_layout_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_layout_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_layout_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_layout_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_tensors_as_inputs();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_tensors_as_inputs();
bool is_ignored_layout_nchw_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_layout_nchw_all_tensors_as_inputs,
          is_ignored_layout_nchw_all_tensors_as_inputs,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs) {
  const Model model = createTestModel_layout_nchw_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_layout_nchw_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_layout_nchw_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_layout_nchw_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

namespace generated_tests::depthwise_conv2d_per_channel {

std::vector<::test_helper::MixedTypedExample>& get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_per_channel

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel {

Model createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_per_channel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_per_channel::get_examples_layout_nchw_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_per_channel

