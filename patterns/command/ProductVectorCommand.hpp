// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_COMMAND_PRODUCTVECTORCOMMAND_H
#define PATTERNS_COMMAND_PRODUCTVECTORCOMMAND_H

#include <vector>
#include "VectorCommand.hpp"

template <typename T>
class ProductVectorCommand : public VectorCommand<T> {
 public:
  T execute(std::vector<T> data);
};

template <typename T>
T ProductVectorCommand<T>::execute(std::vector<T> data) {
  if (data.empty()) {
    return T();
  }
  T out = data[0];
  for (int i = 1; i < data.size(); i++) {
    out = out * data[i];
  }
  return out;
}

#endif  // PATTERNS_COMMAND_PRODUCTVECTORCOMMAND_H
