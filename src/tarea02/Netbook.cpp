// Copyright 2016 Gerardo Teruel

#include <string>
#include "Netbook.hpp"

std::string Netbook::describe() {
  return "netbook";
}

Netbook* Netbook::create() {
  return new Netbook();
}
