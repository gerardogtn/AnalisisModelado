// Copyright 2016 Gerardo Teruel
#include <iostream>
#include "ComputerFactory.hpp"
#include "Laptop.hpp"
#include "Netbook.hpp"
#include "Tablet.hpp"
#include "Desktop.hpp"

int main(int argc, char const *argv[]) {
  ComputerFactory* factory = ComputerFactory::getInstance();
  AbstractComputer * l = factory->create("laptop");
  AbstractComputer * d = factory->create("desktop");
  AbstractComputer * n = factory->create("netbook");
  AbstractComputer * t = factory->create("tablet");
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}
