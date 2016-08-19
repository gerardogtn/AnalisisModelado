// Copyright 2016 Gerardo Teruel
#include <iostream>
#include "Bottle.hpp"

int main(int argc, char const *argv[]) {
  Bottle* bottle = new Bottle(500, "green");
  Bottle* clone = bottle->clone();
  std::cout << "-----Main bottle: " << std::endl;
  std::cout << bottle << std::endl;
  std::cout << bottle->toString() << std::endl;
  std::cout << "-----Clone bottle: " << std::endl;
  std::cout << clone << std::endl;
  std::cout << clone->toString() << std::endl;
  return 0;
}
