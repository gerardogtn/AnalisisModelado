#ifndef OUTLET_RADIOFORMULA_H
#define OUTLET_RADIOFORMULA_H

#include "MediaOutlet.hpp"
#include "../command/ArticlePublishedCommand.hpp"
#include "../command/ConsoleWritterCommand.hpp"
#include "../model/Hillary.hpp"
#include "../model/PenaNieto.hpp"
#include "../model/Trump.hpp"

class RadioFormula : public MediaOutlet {
private:
  static RadioFormula* instance;
  ArticlePublishedCommand* command;

  RadioFormula() {
    Hillary::getInstance()->addObserver(this);
    PenaNieto::getInstance()->addObserver(this);
    Trump::getInstance()->addObserver(this);
  }

  virtual ~RadioFormula() {
    Hillary::getInstance()->removeObserver(this);
    PenaNieto::getInstance()->removeObserver(this);
    Trump::getInstance()->removeObserver(this);
  }

public:
  static RadioFormula* getInstance() {
    if (instance == nullptr) {
      instance = new RadioFormula();
      instance->command = new ConsoleWritterCommand();
    }
    return instance;
  }

  void setArticlePublishedCommand(ArticlePublishedCommand* command) {
    this->command = command;
  }

  virtual void notify(std::string title, std::string author) {
    command->execute("Radio Formula", title, author);
  }
};


RadioFormula* RadioFormula::instance = nullptr;
#endif  // OUTLET_RADIOFORMULA_H
