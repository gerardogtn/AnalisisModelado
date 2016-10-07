// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_OBSERVER_TEMPERATUREOBSERVABLE_H
#define PATTERNS_OBSERVER_TEMPERATUREOBSERVABLE_H

#include "Observable.hpp"

class TemperatureObservable : public Observable {
 public:
  void registerCelsius(int celsius);
  void registerFahrenheit(int fahrenheit);
};

void TemperatureObservable::registerCelsius(int celsius) {
  notifyObservers(celsius);
}

void TemperatureObservable::registerFahrenheit(int fahrenheit) {
  notifyObservers((fahrenheit - 32) / 1.8);
}

#endif  // PATTERNS_OBSERVER_TEMPERATUREOBSERVABLE_H
