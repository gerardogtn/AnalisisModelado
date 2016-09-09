// Copyright 2016 Gerardo Teruel
#ifndef PASTEL_H_
#define PASTEL_H_

#include <iostream>
#include <string>
// #include "PastelCRT.hpp"

class Pastel {
 public:
  virtual std::string describe() = 0;

  virtual void batir() {
    std::cout << "Batiendo... " << std::endl;
  }

  virtual void amasar() {
    std::cout << "Amasando... " << std::endl;
  }

  virtual void hornear() {
    std::cout << "Horneando... " << std::endl;
  }

  virtual void decorar() {
    std::cout << "Decorando... " << std::endl;
  }

  virtual void empacar() {
    std::cout << "Empacando... " << std::endl;
  }
};

#endif  // PASTEL_H_
