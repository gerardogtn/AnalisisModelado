// Copyright 2016 Gerardo Teruel
#include <iostream>
#include "ComputerFactory.hpp"
#include "Laptop.hpp"
#include "Netbook.hpp"
#include "Tablet.hpp"
#include "Desktop.hpp"
#include "ComputerType.hpp"

int main(int argc, char const *argv[]) {
  ComputerFactory* factory = ComputerFactory::getInstance();
  AbstractComputer * l = factory->create(ComputerType::LAPTOP);
  AbstractComputer * d = factory->create(ComputerType::DESKTOP);
  AbstractComputer * n = factory->create(ComputerType::NETBOOK);
  AbstractComputer * t = factory->create(ComputerType::TABLET);
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}
