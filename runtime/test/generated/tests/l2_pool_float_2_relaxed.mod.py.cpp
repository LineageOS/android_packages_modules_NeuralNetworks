// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace l2_pool_float_2_relaxed {
std::vector<MixedTypedExample> examples = {
// Generated l2_pool_float_2_relaxed test
#include "generated/examples/l2_pool_float_2_relaxed.example.cpp"
};
// Generated model constructor
#include "generated/models/l2_pool_float_2_relaxed.model.cpp"
} // namespace l2_pool_float_2_relaxed
TEST_F(GeneratedTests, l2_pool_float_2_relaxed) {
    execute(l2_pool_float_2_relaxed::CreateModel,
            l2_pool_float_2_relaxed::is_ignored,
            l2_pool_float_2_relaxed::examples);
}
