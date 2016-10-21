// Copyright 2016 Gerardo Teruel
#ifndef MODEL_AUTOROBSERVER_H
#define MODEL_AUTOROBSERVER_H

#include <string>

class AutorObserver {
 public:
  virtual void notify(std::string title, std::string author) = 0;
};


#endif  // MODEL_AUTOROBSERVER_H
