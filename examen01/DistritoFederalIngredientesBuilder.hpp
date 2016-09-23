// Copyright 2016 Gerardo Teruel
#ifndef DISTRITOFEDERAL_INGREDIENTESBUILDER_H_
#define DISTRITOFEDERAL_INGREDIENTESBUILDER_H_

#include "IngredientesBuilder.hpp"

#include "Chocolate.hpp"
#include "Fruta.hpp"
#include "Merengue.hpp"

class DistritoFederalIngredientesBuilder : public IngredientesBuilder {
 public:
  virtual IngredientePrototype* build() {
    IngredientePrototype ingredientes[] =
    {new Chocolate(), new Fruta(), new Merengue()};
    return ingredientes;
  }
};

#endif  // DISTRITOFEDERAL_INGREDIENTESBUILDER_H_
