#ifndef OUTLET_TVAZTECA_H
#define OUTLET_TVAZTECA_H

#include "MediaOutlet.hpp"
#include "../command/ArticlePublishedCommand.hpp"
#include "../command/ConsoleWritterCommand.hpp"
#include "../model/Hillary.hpp"
#include "../model/PenaNieto.hpp"
#include "../model/Trump.hpp"

class TvAzteca : public MediaOutlet {
private:
  static TvAzteca* instance;
  ArticlePublishedCommand* command;

  TvAzteca() {
    Hillary::getInstance()->addObserver(this);
    PenaNieto::getInstance()->addObserver(this);
    Trump::getInstance()->addObserver(this);
  }

  virtual ~TvAzteca() {
    Hillary::getInstance()->removeObserver(this);
    PenaNieto::getInstance()->removeObserver(this);
    Trump::getInstance()->removeObserver(this);
  }

public:
  static TvAzteca* getInstance() {
    if (instance == nullptr) {
      instance = new TvAzteca();
      instance->command = new ConsoleWritterCommand();
    }
    return instance;
  }

  void setArticlePublishedCommand(ArticlePublishedCommand* command) {
    this->command = command;
  }

  virtual void notify(std::string title, std::string author) {
    command->execute("TvAzteca", title, author);
  }
};

TvAzteca* TvAzteca::instance = nullptr;
#endif  // OUTLET_TVAZTECA_H
