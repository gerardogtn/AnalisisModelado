#ifndef OUTLET_TELEVISA_H
#define OUTLET_TELEVISA_H

#include "MediaOutlet.hpp"
#include "../command/ArticlePublishedCommand.hpp"
#include "../command/ConsoleWritterCommand.hpp"
#include "../model/Hillary.hpp"
#include "../model/PenaNieto.hpp"
#include "../model/Trump.hpp"

class Televisa : public MediaOutlet {
private:
  static Televisa* instance;
  ArticlePublishedCommand* command;

  Televisa() {
    Hillary::getInstance()->addObserver(this);
    PenaNieto::getInstance()->addObserver(this);
    Trump::getInstance()->addObserver(this);
  }

  virtual ~Televisa() {
    Hillary::getInstance()->removeObserver(this);
    PenaNieto::getInstance()->removeObserver(this);
    Trump::getInstance()->removeObserver(this);
  }

public:
  static Televisa* getInstance() {
    if (instance == nullptr) {
      instance = new Televisa();
      instance->command = new ConsoleWritterCommand();
    }
    return instance;
  }

  void setArticlePublishedCommand(ArticlePublishedCommand* command) {
    this->command = command;
  }

  virtual void notify(std::string title, std::string author) {
    command->execute("Televisa", title, author);
  }
};

Televisa* Televisa::instance = nullptr;

#endif  // OUTLET_MVSNOTICIAS_H
