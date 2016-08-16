// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_NETBOOK_H_
#define SRC_TAREA02_NETBOOK_H_

#include <string>
#include "AbstractComputer.hpp"

class Netbook : public AbstractComputer {
 private:
  Netbook() {}
 public:
  std::string describe();
  static Netbook* create();
};
#endif  // SRC_TAREA02_NETBOOK_H_
