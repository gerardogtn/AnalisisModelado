#ifndef MODEL_TRUMP_H
#define MODEL_TRUMP_H

#include "Autor.hpp"

class Trump : public Autor {
 private:
  static Trump* instance;

  Trump() {}

 public:
  static Trump* getInstance() {
    if (instance == nullptr) {
      instance = new Trump();
    }
    return instance;
  }

  virtual void publish(std::string title) {
    onArticlePublished(title, "Trump");
  }
};

Trump* Trump::instance = nullptr;

#endif  // MODEL_TRUMP_H
