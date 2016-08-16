// Copyright 2016 Gerardo Teruel
#include "Desktop.hpp"
#include <string>

std::string Desktop::describe() {
  return "desktop";
}

Desktop* Desktop::create() {
  return new Desktop();
}
