// Copyright 2016 Gerardo Teruel

#ifndef PATTERNS_OBSERVER_OBSERVABLE_H
#define PATTERNS_OBSERVER_OBSERVABLE_H

#include <list>
#include "Observer.hpp"

class Observable {
 private:
  std::list<Observer*> observers;
 public:
  void registerObserver(Observer* observer);
 protected:
  void removeObserver(Observer* observer);
  void notifyObservers(int data);
};

void Observable::registerObserver(Observer* observer) {
  observers.push_back(observer);
}

void Observable::removeObserver(Observer* observer) {
  observers.remove(observer);
}

void Observable::notifyObservers(int data) {
  for (Observer* observer : observers) {
    observer->update(data);
  }
}

#endif  // PATTERNS_OBSERVER_OBSERVABLE_H
