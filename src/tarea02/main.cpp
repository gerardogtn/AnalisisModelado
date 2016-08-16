// Copyright 2016 Gerardo Teruel
#include <iostream>
#include "ComputerFactory.hpp"
#include "Laptop.hpp"
#include "Netbook.hpp"
#include "Tablet.hpp"
#include "Desktop.hpp"

int main(int argc, char const *argv[]) {
  ComputerFactory* factory = ComputerFactory::getInstance();
  Laptop * l = (Laptop *) factory->create("laptop");
  Desktop * d = (Desktop *) factory->create("desktop");
  Netbook * n = (Netbook *) factory->create("netbook");
  Tablet * t = (Tablet *) factory->create("tablet");
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}
