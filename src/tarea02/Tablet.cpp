// Copyright 2016 Gerardo Teruel

#include <string>
#include "Tablet.hpp"

std::string Tablet::describe() {
  return "tablet";
}

Tablet* Tablet::create() {
  return new Tablet();
}
