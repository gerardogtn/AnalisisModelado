// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_ITERATOR_ITERATOR_H_
#define PATTERNS_ITERATOR_ITERATOR_H_

#include "Element.hpp"

class Iterator {
 public:
  virtual Element* first() = 0;
  virtual Element* next() = 0;
  virtual Element* current() = 0;
  virtual bool isDone() = 0;
  virtual bool hasNext() = 0;
};

#endif  // PATTERNS_ITERATOR_ITERATOR_H_
