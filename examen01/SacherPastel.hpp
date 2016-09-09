// Copyright 2016 Gerardo Teruel
#ifndef SACHERPASTEL_H_
#define SACHERPASTEL_H_

#include "Pastel.hpp"

class SacherPastel : public Pastel {
 public:
  static Pastel* create() {
    return new SacherPastel();
  }
};

#endif  // SACHERPASTEL_H_
