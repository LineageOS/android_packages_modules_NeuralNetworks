// Generated from lsh_projection_3_relaxed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"

namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples() {
static std::vector<::test_helper::MixedTypedExample> examples = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2}}, {1, {3}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {}}},
  // int -> INT32 map
  .int32Operands = {{0, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples;
};

} // namespace generated_tests::lsh_projection_3_relaxed
namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2}}, {1, {3}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {}}},
  // int -> INT32 map
  .int32Operands = {{0, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_dynamic_output_shape;
};

} // namespace generated_tests::lsh_projection_3_relaxed
namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {3, 2}}, {2, {3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f}}, {2, {}}},
  // int -> INT32 map
  .int32Operands = {{1, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_all_tensors_as_inputs;
};

} // namespace generated_tests::lsh_projection_3_relaxed
namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4, 2}}, {1, {3, 2}}, {2, {3}}},
  // int -> FLOAT32 map
  .float32Operands = {{0, {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f}}, {2, {}}},
  // int -> INT32 map
  .int32Operands = {{1, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_all_tensors_as_inputs_dynamic_output_shape;
};

} // namespace generated_tests::lsh_projection_3_relaxed
namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_all_inputs_as_internal = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2}}, {1, {3}}, {2, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {}}, {2, {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f}}},
  // int -> INT32 map
  .int32Operands = {{0, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_all_tensors_as_inputs_all_inputs_as_internal;
};

} // namespace generated_tests::lsh_projection_3_relaxed
namespace generated_tests::lsh_projection_3_relaxed {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape() {
static std::vector<::test_helper::MixedTypedExample> examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape = {
// Begin of an example
{
.operands = {
//Input(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {3, 2}}, {1, {3}}, {2, {4, 2}}},
  // int -> FLOAT32 map
  .float32Operands = {{1, {}}, {2, {0.123f, 0.456f, -0.321f, -0.654f, 1.234f, 5.678f, -4.321f, -8.765f}}},
  // int -> INT32 map
  .int32Operands = {{0, {12345, 54321, 67890, 9876, -12345678, -87654321}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
},
//Output(s)
{ // See tools/test_generator/include/TestHarness.h:MixedTyped
  // int -> Dimensions map
  .operandDimensions = {{0, {4}}},
  // int -> FLOAT32 map
  .float32Operands = {},
  // int -> INT32 map
  .int32Operands = {{0, {1, 6, 10, 12}}},
  // int -> QUANT8_ASYMM map
  .quant8AsymmOperands = {},
  // int -> QUANT16_SYMM map
  .quant16SymmOperands = {},
  // int -> FLOAT16 map
  .float16Operands = {},
  // int -> BOOL8 map
  .bool8Operands = {},
  // int -> QUANT8_SYMM_PER_CHANNEL map
  .quant8ChannelOperands = {},
  // int -> QUANT16_ASYMM map
  .quant16AsymmOperands = {},
  // int -> QUANT8_SYMM map
  .quant8SymmOperands = {},
}
},
}, // End of an example
};
return examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape;
};

} // namespace generated_tests::lsh_projection_3_relaxed
