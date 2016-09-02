// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_ITERATOR_AGGREGATE_H
#define PATTERNS_ITERATOR_AGGREGATE_H

#include "Iterator.hpp"
#include "Element.hpp"

class Aggregate {
 public:
  virtual Iterator* createIterator() = 0;
  virtual int size() = 0;
  virtual Element* get(int position) = 0;
};

#endif  // PATTERNS_ITERATOR_AGGREGATE_H
