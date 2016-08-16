// Copyright 2016 Gerardo Teruel
#ifndef SRC_TAREA02_COMPUTERFACTORY_H_
#define SRC_TAREA02_COMPUTERFACTORY_H_

#include <string>
#include "AbstractComputerFactory.hpp"

class ComputerFactory : public AbstractComputerFactory {
 private:
  static ComputerFactory* instance;
  ComputerFactory() {}

 public:
  AbstractComputer * create(std::string);
  static ComputerFactory* getInstance();
};

#endif  // SRC_TAREA02_COMPUTERFACTORY_H_
