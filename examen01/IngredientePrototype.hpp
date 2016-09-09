// Copyright 2016 Gerardo Teruel
#ifndef INGREDIENTEPROTOTYPE_H
#define INGREDIENTEPROTOTYPE_H

#include <string>
// <template typename T>
class IngredientePrototype {
 public:
  // IngredientePrototype* clone() {
  //   return new IngredientePrototype(static_cast<T>(this));
  // }
  virtual IngredientePrototype* clone() = 0;
 protected:
  std::string name;
};


#endif  // INGREDIENTEPROTOTYPE_H
