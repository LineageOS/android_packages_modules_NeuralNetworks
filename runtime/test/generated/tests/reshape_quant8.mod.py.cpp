// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace reshape_quant8 {
std::vector<MixedTypedExample> examples = {
// Generated reshape_quant8 test
#include "generated/examples/reshape_quant8.example.cpp"
};
// Generated model constructor
#include "generated/models/reshape_quant8.model.cpp"
} // namespace reshape_quant8
TEST_F(GeneratedTests, reshape_quant8) {
    execute(reshape_quant8::CreateModel,
            reshape_quant8::is_ignored,
            reshape_quant8::examples);
}
