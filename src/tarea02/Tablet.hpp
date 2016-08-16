// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_TABLET_H_
#define SRC_TAREA02_TABLET_H_
#include <string>
#include "AbstractComputer.hpp"
class Tablet : public AbstractComputer {
 private:
  Tablet() {}
 public:
  std::string describe();
  static Tablet* create();
};
#endif  // SRC_TAREA02_TABLET_H_
