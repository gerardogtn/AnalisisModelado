// Copyright 2016 Gerardo Teruel
#ifndef PASTELFACTORY_H_
#define PASTELFACTORY_H_

#include <string>
#include "Pastel.hpp"

class PastelFactory {
 public:
  virtual Pastel* make(const std::string& type) = 0;
};

#endif  // PASTELFACTORY_H_
