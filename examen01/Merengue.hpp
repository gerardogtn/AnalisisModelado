// Copyright 2016 Gerardo Teruel
#ifndef MERENGUE_H_
#define MERENGUE_H_

#include <string>
#include "IngredientePrototype.hpp"

class Merengue : public IngredientePrototype {
 public:
  Merengue() {
    this->name = "Merengue";
  }
  virtual IngredientePrototype* clone() {
    return new Merengue();
  }
};

#endif  // MERENGUE_H_
