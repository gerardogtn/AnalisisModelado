// Copyright 2016 Gerardo Teruel
#ifndef IMPOSIBLE_PASTEL_H_
#define IMPOSIBLE_PASTEL_H_

#include "Pastel.hpp"

class ImposiblePastel : public Pastel {
 public:
  static Pastel* create() {
    return new ImposiblePastel();
  }
};

#endif  // IMPOSIBLE_PASTEL_H_
