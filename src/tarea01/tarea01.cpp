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
  std::cout << "works :D\n";
  return 0;
}
