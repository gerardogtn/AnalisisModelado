// Copyright 2016 Gerardo Te  ruel

// #include <typeinfo>
#include <iostream>
#include "NumberControl.hpp"
#include "SumVectorCommand.hpp"
#include "ProductVectorCommand.hpp"

int main(int argc, char const *argv[]) {
  NumberControl numberControl;
  SumVectorCommand<int> sumVectorCommand;
  ProductVectorCommand<int> productVectorCommand;

  numberControl.setCommand(&sumVectorCommand);
  std::cout << "Sum: " << numberControl.onControlExecute() << std::endl;

  numberControl.setCommand(&productVectorCommand);
  std::cout << "Product: " << numberControl.onControlExecute() << std::endl;

  return 0;
}
