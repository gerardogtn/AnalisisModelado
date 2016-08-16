// Copyright 2016 Gerardo Teruel
#include <iostream>
#include "ComputerFactory.h"
#include "Laptop.h"
#include "Netbook.h"
#include "Tablet.h"
#include "Desktop.h"

int main(int argc, char const *argv[]) {
  Laptop * l = (Laptop *) ComputerFactory::create("laptop");
  Desktop * d = (Desktop *) ComputerFactory::create("desktop");
  Netbook * n = (Netbook *) ComputerFactory::create("netbook");
  Tablet * t = (Tablet *) ComputerFactory::create("tablet");
  std::cout << l->describe() << std::endl;
  std::cout << d->describe() << std::endl;
  std::cout << n->describe() << std::endl;
  std::cout << t->describe() << std::endl;
  return 0;
}
