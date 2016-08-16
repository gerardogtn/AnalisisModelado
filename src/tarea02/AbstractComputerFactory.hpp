// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_ABSTRACTCOMPUTERFACTORY_H_
#define SRC_TAREA02_ABSTRACTCOMPUTERFACTORY_H_

#include <string>
#include "AbstractComputer.h"

class AbstractComputerFactory {
 public:
  virtual AbstractComputer* create(std::string type) = 0;
};

#endif  // SRC_TAREA02_ABSTRACTCOMPUTERFACTORY_H_
