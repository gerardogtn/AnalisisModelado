// Copyright 2016 Gerardo Teruel
#ifndef HUEVO_H_
#define HUEVO_H_

#include <string>
#include "IngredientePrototype.hpp"

class Huevo : public IngredientePrototype {
 public:
  Huevo() {
    this->name = "Huevo";
  }
  virtual IngredientePrototype* clone() {
    return new Huevo();
  }
};

#endif  // HUEVO_H_
