// Copyright 2016 Gerardo Teruel
#ifndef LECHE_H_
#define LECHE_H_

#include <string>
#include "IngredientePrototype.hpp"

class Leche : public IngredientePrototype {
 public:
  Leche() {
    this->name = "leche";
  }
  virtual IngredientePrototype* clone() {
    return new Leche();
  }
};

#endif  // LECHE_H_
