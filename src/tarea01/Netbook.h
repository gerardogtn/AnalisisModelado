// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA01_NETBOOK_H_
#define SRC_TAREA01_NETBOOK_H_
#include "AbstractComputer.h"
#include <string>
class Netbook : public AbstractComputer {
 public:
  std::string describe();
};
#endif  // SRC_TAREA01_NETBOOK_H_
