// Copyright 2016 Gerardo Teruel
#ifndef CHOCOLATE_H_
#define CHOCOLATE_H_

#include <string>
#include "IngredientePrototype.hpp"

class Chocolate : public IngredientePrototype {
 public:
  Chocolate() {
    this->name = "Chocolate";
  }
  virtual IngredientePrototype* clone() {
    return new Chocolate();
  }
};

#endif  // CHOCOLATE_H_
