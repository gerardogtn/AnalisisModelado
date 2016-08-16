// Copyright 2016 Gerardo Teruel
#include "Laptop.hpp"
#include <string>

std::string Laptop::describe() {
  return "laptop";
}

Laptop* Laptop::create() {
  return new Laptop();
}
