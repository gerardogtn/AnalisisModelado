// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_PROXY_H
#define PATTERNS_PROXY_H

#include "MiEntero.hpp"

class ArregloEnterosPositivos {
 public:
  explicit ArregloEnterosPositivos(int size);

  MiEntero& operator[] (int pos) {
    return array[pos];
  }

 private:
  int size;
  MiEntero* array;
};

ArregloEnterosPositivos::ArregloEnterosPositivos(int size) {
  this->size = size;
  array = new MiEntero[size];
}

#endif  // PATTERNS_PROXY_H
