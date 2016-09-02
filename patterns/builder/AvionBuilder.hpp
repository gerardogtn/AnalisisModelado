// Copyright 2016 Gerardo Teruel

#include <string>
#include "Avion.hpp"
#include "Ala.hpp"
#include "Motor.hpp"

class AvionBuilder {
 public:
  virtual Avion* get() = 0;
  virtual void buildAlaDerecha(Ala* ala) = 0;
  virtual void buildAlaIzquierda(Ala* ala) = 0;
  virtual void buildMotor(Motor* motor) = 0;
  virtual void buidNumeroDeSerie(int numeroDeSerie) = 0;
  virtual void buildMarca(std::string marca) = 0;
  virtual void create() = 0;
  
 protected:
  Avion* avion = nullptr;
  Ala* alaDerecha = nullptr;
  Ala* alaIzquierda = nullptr;
  Motor* motor = nullptr;
  int numeroDeSerie;
  std::string marca;
  AvionBuilder();
};
