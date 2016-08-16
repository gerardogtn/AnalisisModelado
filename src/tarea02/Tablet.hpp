// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_TABLET_H_
#define SRC_TAREA02_TABLET_H_
#include <string>
#include "AbstractComputer.hpp"
class Tablet : public AbstractComputer {
 public:
  std::string describe();
};
#endif  // SRC_TAREA02_TABLET_H_
