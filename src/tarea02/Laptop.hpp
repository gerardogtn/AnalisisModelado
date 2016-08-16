// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_LAPTOP_H_
#define SRC_TAREA02_LAPTOP_H_

#include <string>
#include "AbstractComputer.hpp"

class Laptop : public AbstractComputer {
 private:
  Laptop() {}
 public:
  std::string describe();
  static Laptop* create();
};
#endif  // SRC_TAREA02_LAPTOP_H_
