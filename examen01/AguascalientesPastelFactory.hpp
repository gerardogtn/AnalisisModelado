// Copyright 2016 Gerardo Teruel
#ifndef AGUASCALIENTESPASTELFACTORY_H_
#define AGUASCALIENTESPASTELFACTORY_H_

#include <string>
#include <stdexcept>
#include "Pastel.hpp"
#include "PastelFactory.hpp"
#include "TresLechesPastel.hpp"

class AguascalientesPastelFactory : public PastelFactory {
 public:
  virtual Pastel* make(const std::string& type) {
    if (type == "Tres leches") {
      return TresLechesPastel::create();
    }
    throw std::runtime_error("Cannot find pastel for type");
  }
};

#endif  // AGUASCALIENTESPASTELFACTORY_H_
