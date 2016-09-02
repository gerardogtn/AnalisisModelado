// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_ITERATOR_CONCRETEITERATOR_H_
#define PATTERNS_ITERATOR_CONCRETEITERATOR_H_

#include "Iterator.hpp"
#include "ConcreteAggregate.hpp"

class ConcreteIterator : public Iterator {
 private:
  ConcreteAggregate* aggregate = nullptr;
  int currentElement = 0;
 public:
  explicit ConcreteIterator(ConcreteAggregate* Aggregate);
  virtual ~ConcreteIterator();
  virtual Element* first();
  virtual Element* next();
  virtual Element* current();
  virtual bool isDone();
  virtual bool hasNext();
};

#endif  // PATTERNS_ITERATOR_CONCRETEITERATOR_H_
