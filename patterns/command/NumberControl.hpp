// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_COMMAND_NUMBERCONTROL_H
#define PATTERNS_COMMAND_NUMBERCONTROL_H

#include <vector>
#include "VectorCommand.hpp"

class NumberControl {
 private:
  VectorCommand<int>* command;
  std::vector<int> numbers = {1, 3, 5, 8};

 public:
  void add(int num) {
    numbers.push_back(num);
  }

  void remove(int num) {
    numbers.erase(std::remove(numbers.begin(), numbers.end(), num), numbers.end());
  }

  void setCommand(VectorCommand<int>* command) {
    this->command = command;
  }

  // PRECONDITION: this->command is not null.
  int onControlExecute() {
    return this->command->execute(numbers);
  }
};

#endif  // PATTERNS_COMMAND_NUMBERCONTROL_H
