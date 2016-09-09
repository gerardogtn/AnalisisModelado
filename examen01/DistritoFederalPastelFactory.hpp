// Copyright 2016 Gerardo Teruel
#ifndef AGUASCALIENTESPASTELFACTORY_H_
#define AGUASCALIENTESPASTELFACTORY_H_

#include <string>
#include <stdexcept>
#include "Pastel.hpp"
#include "PastelFactory.hpp"
#include "SacherPastel.hpp"
#include "ImposiblePastel.hpp"

class AguascalientesPastelFactory : public PastelFactory {
 public:
  virtual Pastel* make(const std::string& type) {
    if (type == "Sacher") {
      return SacherPastel::create();
    } else if (type == "Imposible") {
      return ImposiblePastel::create();
    }
    throw std::runtime_error("Cannot find pastel for type");
  }
};

#endif  // AGUASCALIENTESPASTELFACTORY_H_
