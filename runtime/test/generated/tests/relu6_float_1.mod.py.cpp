// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace relu6_float_1 {
std::vector<MixedTypedExample> examples = {
// Generated relu6_float_1 test
#include "generated/examples/relu6_float_1.example.cpp"
};
// Generated model constructor
#include "generated/models/relu6_float_1.model.cpp"
} // namespace relu6_float_1
TEST_F(GeneratedTests, relu6_float_1) {
    execute(relu6_float_1::CreateModel,
            relu6_float_1::is_ignored,
            relu6_float_1::examples);
}
