// Copyright 2016 Gerardo Teruel

#ifndef PATTERNS_BUILDER_BOEINGBUILDER_H_
#define PATTERNS_BUILDER_BOEINGBUILDER_H_

#include <string>
#include "AvionBuilder.hpp"
#include "Avion.hpp"

class BoeingBuilder : public AvionBuilder {
 public:
  BoeingBuilder() {}
  Avion* get();
  void buildAlaDerecha(Ala* ala);
  void buildAlaIzquierda(Ala* ala);
  void buildMotor(Motor* motor);
  void buidNumeroDeSerie(int numeroDeSerie);
  void buildMarca(std::string marca);
  void create();
 protected:
  std::string marca = "Boeing";
};

#endif  // PATTERNS_BUILDER_BOEINGBUILDER_H_
