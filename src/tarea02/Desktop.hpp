// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_DESKTOP_H_
#define SRC_TAREA02_DESKTOP_H_

#include <string>
#include "AbstractComputer.hpp"

class Desktop : public AbstractComputer {
 private:
  Desktop() {}
 public:
  std::string describe();
  static Desktop * create();
};
#endif  // SRC_TAREA02_DESKTOP_H_
