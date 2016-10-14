// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_COMMAND_VECTORCOMMAND_H
#define PATTERNS_COMMAND_VECTORCOMMAND_H

#include <iostream>
#include <vector>

template <typename T>
class VectorCommand {
 public:
  virtual T execute(std::vector<T> data) = 0;
};

#endif  // PATTERNS_COMMAND_VECTORCOMMAND_H
