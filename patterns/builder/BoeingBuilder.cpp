// Copyright 2016 Gerardo Teruel

#include <string>
#include "Avion.hpp"
#include "BoeingBuilder.hpp"

Avion* BoeingBuilder::get() {
  if (this->avion == nullptr) {
    throw new std::runtime_error("El avion no fue creado");
  } else {
    return this->avion;
  }
}

void BoeingBuilder::create() {
  this->avion = new Avion(numeroDeSerie, marca, motor, alaIzquierda, alaDerecha);
}

void BoeingBuilder::buildAlaDerecha(Ala* ala) {
  this->alaDerecha = ala;
}

void BoeingBuilder::buildAlaIzquierda(Ala* ala) {
  this->alaIzquierda = ala;
}

void BoeingBuilder::buildMotor(Motor* motor) {
  this->motor = motor;
}

void BoeingBuilder::buidNumeroDeSerie(int numeroDeSerie) {
  this->numeroDeSerie = numeroDeSerie;
}

void BoeingBuilder::buildMarca(std::string marca) {
  this->marca = "Boeing";
}
