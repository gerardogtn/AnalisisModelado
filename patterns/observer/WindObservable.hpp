// Copyright 2016 Gerardo Teruel

#ifndef PATTERNS_OBSERVER_CONCRETEOBSERVABLE_H
#define PATTERNS_OBSERVER_CONCRETEOBSERVABLE_H

#include "Observable.hpp"
class WindObservable : public Observable {
 public:
  void registerWindSpeed(int windSpeed);
};

void WindObservable::registerWindSpeed(int windSpeed) {
  notifyObservers(windSpeed);
}

#endif  // PATTERNS_OBSERVER_CONCRETEOBSERVABLE_H
