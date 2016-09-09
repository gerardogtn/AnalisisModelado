// Copyright 2016 Gerardo Teruel
#ifndef TRESLECHESPASTEL_H_
#define TRESLECHESPASTEL_H_

#include "Pastel.hpp"

class TresLechesPastel : public Pastel {
 public:
  static Pastel* create() {
    return new TresLechesPastel();
  }
};

#endif
