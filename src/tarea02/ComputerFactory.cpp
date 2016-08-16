// Copyright 2016 Gerardo Teruel
#include <string>
#include "ComputerFactory.hpp"
#include "Desktop.hpp"
#include "Tablet.hpp"
#include "Laptop.hpp"
#include "Netbook.hpp"

AbstractComputer * ComputerFactory::create(ComputerType type) {
  if (type == ComputerType::DESKTOP) {
    return Desktop::create();
  } else if (type == ComputerType::LAPTOP) {
    return Laptop::create();
  } else if (type == ComputerType::TABLET) {
    return Tablet::create();
  } else if (type == ComputerType::NETBOOK) {
    return Netbook::create();
  }
  throw std::runtime_error("There's a type of computer that isn't implemented in the factory");
}

ComputerFactory* ComputerFactory::instance = nullptr;

ComputerFactory* ComputerFactory::getInstance() {
  if (ComputerFactory::instance == nullptr) {
    ComputerFactory::instance = new ComputerFactory();
  }
  return ComputerFactory::instance;
}
