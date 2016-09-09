// Copyright 2016 Gerardo Teruel
#ifndef DISTRITOFEDERALSUCURSAL_H_
#define DISTRITOFEDERALSUCURSAL_H_

#include <vector>
#include "Sucursal.hpp"
#include "DistritoFederalPastelFactory.hpp"
#include "DistritoFederalIngredientesBuilder.hpp"

class DistritoFederalSucursal: public Sucursal {
 private:
  static DistritoFederalSucursal* instance;

 protected:
  IngredientesBuilder* ingredientesBuilder;
  PastelFactory* pastelFactory;
  std::vector<Pastel*> pasteles;

 public:
  static Sucursal* getInstance() {
    if (instance == nullptr) {
      instance = new DistritoFederalIngredientesBuilder(new AguascalientesIngredientesBuilder(), new DistritoFederalPastelFactory());
    }
    return instance;
  }

  DistritoFederalSucursal(IngredientesBuilder* ingredientesBuilder,
    PastelFactory* pastelFactory) : ingredientesBuilder(ingredientesBuilder),
    pastelFactory(pastelFactory)
     {}
};

DistritoFederalSucursal* DistritoFederalSucursal::instance = nullptr;

#endif  // DISTRITOFEDERALSUCURSAL_H_
