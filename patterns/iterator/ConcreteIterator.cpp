// Copyright 2016 Gerardo Teruel
#include "ConcreteIterator.hpp"
#include "Aggregate.hpp"

ConcreteIterator::ConcreteIterator(ConcreteAggregate* aggregate) {
  this->aggregate = aggregate;
  this->currentElement = 0;
}

ConcreteIterator::~ConcreteIterator() {
  this->aggregate = nullptr;
}

Element* ConcreteIterator::first() {
  return aggregate->get(0);
}

Element* ConcreteIterator::next() {
  return aggregate->get(++currentElement);
}

Element* ConcreteIterator::current() {
  return aggregate->get(currentElement);
}

bool ConcreteIterator::isDone() {
  return currentElement == aggregate->size();
}

bool ConcreteIterator::hasNext() {
  return currentElement < aggregate->size();
}
