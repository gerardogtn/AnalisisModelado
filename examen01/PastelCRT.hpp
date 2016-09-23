// Copyright 2016 Gerardo Teruel
#ifndef PASTELCRT_H_
#define PASTELCRT_H_

#include "Pastel.hpp"

template <typename T>
class PastelCRT {
 public:
  static Pastel* create() {
    static_cast<Pastel>(new T()).create();
  }
};

#endif  // PASTELCRT_H_
