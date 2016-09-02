// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_ITERATOR_CONCRETEAGGREGATE_H_
#define PATTERNS_ITERATOR_CONCRETEAGGREGATE_H_

#include <vector>
#include "Aggregate.hpp"
#include "Element.hpp"

class ConcreteAggregate : public Aggregate {
 private:
  std::vector<Element*> elements;
 public:
  ConcreteAggregate();
  virtual ~ConcreteAggregate();
  virtual Iterator* createIterator();
  virtual int size();
  virtual Element* get(int position);
  void add(Element* element);
  void remove(Element* element);
};

#endif  // PATTERNS_ITERATOR_CONCRETEAGGREGATE_H_
