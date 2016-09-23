// Copyright 2016 Gerardo Teruel
#ifndef AGUASCALIENTES_INGREDIENTESBUILDER_H_
#define AGUASCALIENTES_INGREDIENTESBUILDER_H_

#include "IngredientesBuilder.hpp"

#include "Leche.hpp"
#include "Huevo.hpp"
#include "Mantequilla.hpp"

class AguascalientesIngredientesBuilder : public IngredientesBuilder {
 public:
  virtual IngredientePrototype* build() {
    IngredientePrototype ingredientes[] =
    {new Leche(), new Huevo(), new Mantequilla()};
    return ingredientes;
  }
};

#endif  // AGUASCALIENTES_INGREDIENTESBUILDER_H_
