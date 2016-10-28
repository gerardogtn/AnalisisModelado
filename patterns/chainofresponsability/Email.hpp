// Copyright 2016 Gerardo Teruel
#ifndef EMAIL_H
#define EMAIL_H

#include <string>

class Email {
 private:
  std::string title;
  std::string content;

 public:
  Email(std::string title, std::string content) {
    this->title = title;
    this->content = content;
  }

  virtual ~Email() { }

  const std::string& getContent() const {
    return content;
  }

  const std::string& getTitle() const {
    return title;
  }
};

#endif  // EMAIL_H
