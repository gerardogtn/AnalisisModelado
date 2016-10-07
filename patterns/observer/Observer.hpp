// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_OBSERVER_OBSERVER_H
#define PATTERNS_OBSERVER_OBSERVER_H

class Observer {
 public:
  virtual void update(int data) = 0;
};


#endif  // PATTERNS_OBSERVER_OBSERVER_H
