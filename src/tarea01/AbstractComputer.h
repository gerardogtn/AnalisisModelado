// Copyright 2016 Gerardo Teruel
#ifndef AbstractComputer_h
#define AbstractComputer_h

#include <string>
class AbstractComputer {
 public:
  virtual std::string describe() = 0;
};
#endif
