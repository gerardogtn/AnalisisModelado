// Copyright 2016 Gerardo Teruel
#ifndef AGUASCALIENTESSUCURSAL_H_
#define AGUASCALIENTESSUCURSAL_H_

#include <vector>
#include "Sucursal.hpp"
#include "AguascalientesPastelFactory.hpp"
#include "AguascalientesIngredientesBuilder.hpp"

class AguasCalientesSucursal: public Sucursal {
 private:
  static AguasCalientesSucursal* instance;

 protected:
  IngredientesBuilder* ingredientesBuilder;
  PastelFactory* pastelFactory;
  std::vector<Pastel*> pasteles;

 public:
  static Sucursal* getInstance() {
    if (instance == nullptr) {
      instance = new AguasCalientesSucursal(new AguascalientesIngredientesBuilder, new AguascalientesPastelFactory());
    }
    return instance;
  }

  AguasCalientesSucursal(IngredientesBuilder* ingredientesBuilder,
    PastelFactory* pastelFactory) : ingredientesBuilder(ingredientesBuilder),
    pastelFactory(pastelFactory) {}
};

AguasCalientesSucursal* AguasCalientesSucursal::instance = nullptr;

#endif  // AGUASCALIENTESSUCURSAL_H_
