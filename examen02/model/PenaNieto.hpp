#ifndef MODEL_PENANIETO_H
#define MODEL_PENANIETO_H

#include "Autor.hpp"

class PenaNieto : public Autor {
 private:
  static PenaNieto* instance;

  PenaNieto() {}

 public:
  static PenaNieto* getInstance() {
    if (instance == nullptr) {
      instance = new PenaNieto();
    }
    return instance;
  }

  virtual void publish(std::string title) {
    onArticlePublished(title, "Pena Nieto");
  }
};
PenaNieto* PenaNieto::instance = nullptr;

#endif  // MODEL_PENANIETO_H
