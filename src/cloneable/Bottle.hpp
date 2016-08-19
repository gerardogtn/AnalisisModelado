// Copyright 2016 Gerardo Teruel

#include <string>
#include "Cloneable.hpp"

class Bottle : public Cloneable<Bottle> {
 private:
  int size;
  std::string color;

 public:
  Bottle(int size, std::string color);
  std::string toString();
  Bottle* clone();
};
