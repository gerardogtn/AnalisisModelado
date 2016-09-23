// Copyright 2016 Gerardo Teruel
#ifndef INGREDIENTESBUILDER_H_
#define INGREDIENTESBUILDER_H_

#include "IngredientePrototype.hpp"

class IngredientesBuilder {
 public:
  virtual IngredientePrototype* build() = 0;
};

#endif  // INGREDIENTESBUILDER_H_
