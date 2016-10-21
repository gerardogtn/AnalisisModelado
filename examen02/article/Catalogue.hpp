#ifndef ARTICLE_CATALOGUE_H
#define ARTICLE_CATALOGUE_H

#include <list>
#include <string>
#include "Article.hpp"
#include "../model/AutorObserver.hpp"

class Catalogue : public AutorObserver {
 private:
  static Catalogue* instance;
  std::list<Article> articles;

public:
  static Catalogue* getInstance() {
    if (instance == nullptr) {
      instance = new Catalogue();
    }
    return instance;
  }

  virtual void notify(std::string title, std::string author) {
    articles.push_back(Article(title, author));
  }

  friend std::ostream& operator<<(std::ostream& os, const Catalogue& catalogue);

};

Catalogue* Catalogue::instance = nullptr;

std::ostream& operator<<(std::ostream& os, const Catalogue& catalogue) {
  for (Article article : catalogue.articles) {
    os << article;
  }
  return os;
}

#endif  // ARTICLE_CATALOGUE_H
