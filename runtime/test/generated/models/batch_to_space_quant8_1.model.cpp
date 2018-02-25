// Generated file (from: batch_to_space_quant8_1.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type2(Type::TENSOR_INT32, {2, 2});
  OperandType type1(Type::TENSOR_INT32, {2});
  OperandType type3(Type::TENSOR_QUANT8_ASYMM, {1, 4, 4, 1}, 1.0, 0);
  OperandType type0(Type::TENSOR_QUANT8_ASYMM, {4, 2, 2, 1}, 1.0, 0);
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto block_size = model->addOperand(&type1);
  auto crops = model->addOperand(&type2);
  auto output = model->addOperand(&type3);
  // Phase 2, operations
  static int32_t block_size_init[] = {2, 2};
  model->setOperandValue(block_size, block_size_init, sizeof(int32_t) * 2);
  static int32_t crops_init[] = {0, 0, 0, 0};
  model->setOperandValue(crops, crops_init, sizeof(int32_t) * 4);
  model->addOperation(ANEURALNETWORKS_BATCH_TO_SPACE_ND, {input, block_size, crops}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  assert(model->isValid());
}

bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}
