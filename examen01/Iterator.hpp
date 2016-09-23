// Copyright 2016 Gerardo Teruel
#ifndef ITERATOR_H_
#define ITERATOR_H_

#include <vector>

template <typename T>
class Iterator {
 public:
  virtual bool hasNext() = 0;
  virtual T* next() = 0;

 protected:
  std::vector<T> items;
  long i;
};

#endif  // ITERATOR_H_
