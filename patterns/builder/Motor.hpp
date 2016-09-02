// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_BUILDER_MOTOR_H_
#define PATTERNS_BUILDER_MOTOR_H_

#include <string>

class Motor {
 public:
  Motor(std::string marca, double potencia);
 private:
  int numeroDeSerie;
  std::string marca;
  double potencia;
};


#endif  // PATTERNS_BUILDER_MOTOR_H_
