// Copyright 2016 Gerardo Teruel
#ifndef ARTICLE_ARTICLE_H
#define ARTICLE_ARTICLE_H

#include <string>
#include <iostream>

class Article {
 private:
  std::string author;
  std::string title;

 public:
  Article(std::string title, std::string author) {
    this->title = title;
    this->author = author;
  }

  friend std::ostream& operator<<(std::ostream& os, const Article& article);
};

std::ostream& operator<<(std::ostream& os, const Article& entero) {
  os << "Articulo { titulo: " << entero.title << ", autor: " << entero.author << "}\n";
  return os;
}

#endif  // ARTICLE_ARTICLE_H
