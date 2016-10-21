#ifndef OUTLET_CNNNOTICIAS_H
#define OUTLET_CNNNOTICIAS_H

#include "MediaOutlet.hpp"
#include "../command/ArticlePublishedCommand.hpp"
#include "../command/ConsoleWritterCommand.hpp"
#include "../model/Hillary.hpp"
#include "../model/PenaNieto.hpp"
#include "../model/Trump.hpp"

class CnnNoticias : public MediaOutlet {
private:
  static CnnNoticias* instance;
  ArticlePublishedCommand* command;

  CnnNoticias() {
    Hillary::getInstance()->addObserver(this);
    PenaNieto::getInstance()->addObserver(this);
  }

  virtual ~CnnNoticias() {
    Hillary::getInstance()->removeObserver(this);
    PenaNieto::getInstance()->removeObserver(this);
  }

public:
  static CnnNoticias* getInstance() {
    if (instance == nullptr) {
      instance = new CnnNoticias();
      instance->command = new ConsoleWritterCommand();
    }
    return instance;
  }

  void setArticlePublishedCommand(ArticlePublishedCommand* command) {
    this->command = command;
  }

  virtual void notify(std::string title, std::string author) {
    command->execute("CnnNoticias", title, author);
  }
};

CnnNoticias* CnnNoticias::instance = nullptr;

#endif  // OUTLET_CNNNOTICIAS_H
