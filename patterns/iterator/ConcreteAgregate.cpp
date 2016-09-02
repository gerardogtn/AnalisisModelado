// Copyright 2016 Gerardo Teruel
#include <stdexcept>
#include "ConcreteAggregate.hpp"
#include "ConcreteIterator.hpp"

ConcreteAggregate::ConcreteAggregate() {}

ConcreteAggregate::~ConcreteAggregate() {}

Iterator* ConcreteAggregate::createIterator() {
  return new ConcreteIterator(this);
}

int ConcreteAggregate::size() {
  return elements.size();
}

Element* ConcreteAggregate::get(int position) {
  if (position > elements.size()) {
    throw std::runtime_error("There's no value at position");
  }
  return elements[position];
}

void ConcreteAggregate::add(Element* element) {
  elements.push_back(element);
}

void ConcreteAggregate::remove(Element *element) {
  for (int i = 0; i < elements.size(); i++) {
    if (elements[i] == element) {
      elements.erase(elements.begin() + i);
      return;
    }
  }
}
