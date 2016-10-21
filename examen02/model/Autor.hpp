// Copyright 2016 Gerardo Teruel.
#ifndef MODEL_AUTOR_H
#define MODEL_AUTOR_H

#include <list>
#include <string>
#include "AutorObserver.hpp"
#include "../article/Catalogue.hpp"

class Autor {
 private:
  std::list<AutorObserver*> observers;

 protected:
  Autor() {
    addObserver(Catalogue::getInstance());
  }

 public:
  virtual void publish(std::string title) = 0;

  void addObserver(AutorObserver* observer) {
    observers.push_back(observer);
  }

  void removeObserver(AutorObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
  }

  void onArticlePublished(std::string title, std::string author) {
    for (AutorObserver* observer : observers) {
      observer->notify(title, author);
    }
  }

};

#endif  // MODEL_AUTOR_H
