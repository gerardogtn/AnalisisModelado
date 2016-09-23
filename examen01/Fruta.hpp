// Copyright 2016 Gerardo Teruel
#ifndef FRUTA_H_
#define FRUTA_H_

#include <string>
#include "IngredientePrototype.hpp"

class Fruta : public IngredientePrototype {
 public:
  Fruta() {
    this->name = "Fruta";
  }
  virtual IngredientePrototype* clone() {
    return new Fruta();
  }
};

#endif  // HUEVO_H_
