// Copyright 2016 Gerardo Teruel
#ifndef PASTELITERATOR_H_
#define PASTELITERATOR_H_

#include <vector>
#include "Pastel.hpp"
#include "Iterator.hpp"

class PastelIterator : public Iterator<Pastel> {
 public:
  explicit PastelIterator(const std::vector<Pastel*> pasteles) :
      items(pasteles), i(0)
  {}

  virtual bool hasNext() {
    return i < items.size();
  }

  virtual Pastel* next() {
    return items[i++];
  }

 protected:
  std::vector<Pastel*> items;
  long i;
};

#endif  // PASTELITERATOR_H_
