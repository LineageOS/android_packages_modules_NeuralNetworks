// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace squeeze_float_1 {
std::vector<MixedTypedExample> examples = {
// Generated squeeze_float_1 test
#include "generated/examples/squeeze_float_1.example.cpp"
};
// Generated model constructor
#include "generated/models/squeeze_float_1.model.cpp"
} // namespace squeeze_float_1
TEST_F(GeneratedTests, squeeze_float_1) {
    execute(squeeze_float_1::CreateModel,
            squeeze_float_1::is_ignored,
            squeeze_float_1::examples);
}
