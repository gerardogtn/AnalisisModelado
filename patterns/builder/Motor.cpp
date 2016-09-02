// Copyright 2016 Gerardo Teruel
#include <stdlib.h>
#include <string>
#include "Motor.hpp"

Motor::Motor(std::string marca, double potencia) {
  this->marca = marca;
  this->potencia = potencia;
  this->numeroDeSerie = rand();
}
