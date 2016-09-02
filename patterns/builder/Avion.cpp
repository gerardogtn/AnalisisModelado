// Copyright 2016 Gerardo Teruel
#include <string>
#include "Avion.hpp"
#include "Motor.hpp"
#include "Ala.hpp"

Avion::Avion(int numeroDeSerie, std::string marca, Motor* motor, Ala* alaDerecha, Ala* alaIzquierda) {
  this->numeroDeSerie = numeroDeSerie;
  this->marca = marca;
  this->motor = motor;
  this->alas[0] = alaIzquierda;
  this->alas[1] = alaDerecha;
}
