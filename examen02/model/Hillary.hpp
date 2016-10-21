#ifndef MODEL_HILLARY_H
#define MODEL_HILLARY_H

#include "Autor.hpp"

class Hillary : public Autor {
 private:
  static Hillary* instance;

  Hillary() {}

 public:
  static Hillary* getInstance() {
    if (instance == nullptr) {
      instance = new Hillary();
    }
    return instance;
  }

  virtual void publish(std::string title) {
    onArticlePublished(title, "Hillary");
  }
};

Hillary* Hillary::instance = nullptr;
#endif  // MODEL_HILLARY_H
