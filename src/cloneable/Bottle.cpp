// Copyright 2016 Gerardo Teruel

#include "Bottle.hpp"
#include <string>

Bottle::Bottle(int size, std::string color) {
  this->size = size;
  this->color = color;
}

Bottle* Bottle::clone() {
  return new Bottle(this->size, this->color);
}

std::string Bottle::toString() {
  return "Bottle { size: " + std::to_string(this->size) + " color: " + this->color + " }";
}
