// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_DESKTOP_H_
#define SRC_TAREA02_DESKTOP_H_
#include "AbstractComputer.h"
#include <string>
class Desktop : public AbstractComputer {
 public:
  std::string describe();
};
#endif  // SRC_TAREA02_DESKTOP_H_
