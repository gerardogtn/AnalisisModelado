// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_BUILDER_AVION_H
#define PATTERNS_BUILDER_AVION_H

#include <string>
#include "Piloto.hpp"
#include "Motor.hpp"
#include "Ala.hpp"

class Avion {
public:
  Avion(int numeroDeSerie, std::string marca, Motor* motor, Ala* alaIzquierda, Ala* alaDerecha);
 private:
  int numeroDeSerie;
  std::string marca;
  Piloto* piloto;
  Motor* motor;
  Ala* alas[2];
};

#endif  // PATTERNS_BUILDER_AVION_H
