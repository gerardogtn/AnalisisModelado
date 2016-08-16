// Copyright 2016 Gerardo Teruel
#ifndef ComputerFactory_h
#define ComputerFactory_h

#include <string>
#include "AbstractComputer.h"

class ComputerFactory {
public:
  static AbstractComputer * create(std::string type);
};

#endif
