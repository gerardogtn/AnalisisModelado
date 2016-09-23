// Copyright 2016 Gerardo Teruel
#ifndef MANTEQUILLA_H_
#define MANTEQUILLA_H_

#include <string>
#include "IngredientePrototype.hpp"

class Mantequilla : public IngredientePrototype {
 public:
  Mantequilla() {
    this->name = "Mantequilla";
  }
  virtual IngredientePrototype* clone() {
    return new Mantequilla();
  }
};

#endif  // MANTEQUILLA_H_
