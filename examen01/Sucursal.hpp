// Copyright 2016 Gerardo Teruel
#ifndef SUCURSAL_H_
#define SUCURSAL_H_

#include <vector>
#include <string>
#include "IngredientesBuilder.hpp"
#include "PastelFactory.hpp"
#include "Iterator.hpp"
#include "Pastel.hpp"
#include "PastelIterator.hpp"

class Sucursal {
 protected:
  IngredientesBuilder* ingredientesBuilder;
  PastelFactory* pastelFactory;
  std::vector<Pastel*> pasteles;

 public:
  void setIngredientesBuilder(IngredientesBuilder* ingredientesBuilder) {
    this->ingredientesBuilder = ingredientesBuilder;
  }

  void setPastelFactory(PastelFactory* pastelFactory) {
    this->pastelFactory = pastelFactory;
  }

  Iterator<Pastel>* getIterator() {
    return new PastelIterator(pasteles);
  }

  void addPastel(const std::string& name) {
    pasteles.push_back(pastelFactory->make(name));
  }

  void printPasteles() {
    Iterator<Pastel>* iterator = new PastelIterator(pasteles);
    while (iterator->hasNext()) {
      Pastel* pastel = iterator->next();
      std::cout << pastel->describe() << std::endl;
    }
  }

  void buscarPastel(const std::string& name) {
    int i = 0;
    Iterator<Pastel>* iterator = new PastelIterator(pasteles);
    while (iterator->hasNext()) {
      Pastel* pastel = iterator->next();
      if (pastel->describe() == name) {
        i++;
      }
    }
    std::cout << "Encontre " << i << " pasteles " << name << std::endl;
  }
};

#endif  // SUCURSAL_H_
