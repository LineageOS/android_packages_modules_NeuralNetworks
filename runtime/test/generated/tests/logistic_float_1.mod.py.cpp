// DO NOT EDIT;
// Generated by ml/nn/runtime/test/specs/generate_test.sh
#include "../../TestGenerated.h"

namespace logistic_float_1 {
std::vector<MixedTypedExample> examples = {
// Generated logistic_float_1 test
#include "generated/examples/logistic_float_1.example.cpp"
};
// Generated model constructor
#include "generated/models/logistic_float_1.model.cpp"
} // namespace logistic_float_1
TEST_F(GeneratedTests, logistic_float_1) {
    execute(logistic_float_1::CreateModel,
            logistic_float_1::is_ignored,
            logistic_float_1::examples);
}
