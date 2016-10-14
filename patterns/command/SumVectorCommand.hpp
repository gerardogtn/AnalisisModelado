// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_COMMAND_SUMVECTORCOMMAND_H
#define PATTERNS_COMMAND_SUMVECTORCOMMAND_H

#include <vector>
#include "VectorCommand.hpp"

template <typename T>
class SumVectorCommand : public VectorCommand<T> {
 public:
  SumVectorCommand() {}
  virtual ~SumVectorCommand() {}
  T execute(std::vector<T> data) {
    if (data.empty()) {
      return T();
    }
    T out = data[0];
    for (int i = 1; i < data.size(); i++) {
      out = out + data[i];
    }
    return out;
  }
};


#endif  // PATTERNS_COMMAND_SUMVECTORCOMMAND_H
