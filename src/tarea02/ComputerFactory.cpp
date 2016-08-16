// Copyright 2016 Gerardo Teruel
#include <string>
#include "ComputerFactory.hpp"
#include "Desktop.hpp"
#include "Tablet.hpp"
#include "Laptop.hpp"
#include "Netbook.hpp"

AbstractComputer * ComputerFactory::create(std::string type) {
  if (type == "desktop") {
    return Desktop::create();
  } else if (type == "laptop") {
    return Laptop::create();
  } else if (type == "tablet") {
    return Tablet::create();
  } else if (type == "netbook") {
    return Netbook::create();
  }
  throw std::runtime_error("Invalid computer type");
}

ComputerFactory* ComputerFactory::instance = nullptr;

ComputerFactory* ComputerFactory::getInstance() {
  if (ComputerFactory::instance == nullptr) {
    ComputerFactory::instance = new ComputerFactory();
  }
  return ComputerFactory::instance;
}
