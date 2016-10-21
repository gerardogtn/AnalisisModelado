#ifndef OUTLET_MVSNOTICIAS_H
#define OUTLET_MVSNOTICIAS_H

#include "MediaOutlet.hpp"
#include "../command/ArticlePublishedCommand.hpp"
#include "../command/ConsoleWritterCommand.hpp"
#include "../model/Hillary.hpp"
#include "../model/PenaNieto.hpp"
#include "../model/Trump.hpp"

class MvsNoticias : public MediaOutlet {
private:
  static MvsNoticias* instance;
  ArticlePublishedCommand* command;

  MvsNoticias() {
    Hillary::getInstance()->addObserver(this);
    PenaNieto::getInstance()->addObserver(this);
    Trump::getInstance()->addObserver(this);
  }

  virtual ~MvsNoticias() {
    Hillary::getInstance()->removeObserver(this);
    PenaNieto::getInstance()->removeObserver(this);
    Trump::getInstance()->removeObserver(this);
  }

public:
  static MvsNoticias* getInstance() {
    if (instance == nullptr) {
      instance = new MvsNoticias();
      instance->command = new ConsoleWritterCommand();
    }
    return instance;
  }

  void setArticlePublishedCommand(ArticlePublishedCommand* command) {
    this->command = command;
  }

  virtual void notify(std::string title, std::string author) {
    command->execute("MvsNoticias", title, author);
  }
};

MvsNoticias* MvsNoticias::instance = nullptr;

#endif  // OUTLET_MVSNOTICIAS_H
