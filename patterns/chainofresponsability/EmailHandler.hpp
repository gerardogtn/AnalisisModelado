// Copyright 2016 Gerardo Teruel
#ifndef EMAILHANDLER_H
#define EMAILHANDLER_H

#include <stdexcept>
#include "Email.hpp"

class EmailHandler {
 private:
  EmailHandler* sucessor = nullptr;

 public:
  EmailHandler() {}
  virtual ~EmailHandler() {
    if (sucessor) {
      delete sucessor;
    }
  }

  void setNext(EmailHandler* next) {
    this->sucessor = next;
  }

  void handle(const Email& email) {
    if (isHandled(email)) {
      handleEmail(email);
    } else if (sucessor != nullptr) {
      sucessor->handle(email);
    } else {
      throw std::runtime_error("No way to handle the email :(");
    }
  }

 protected:
  virtual bool isHandled(const Email& email) = 0;
  virtual void handleEmail(const Email& email) = 0;
};

#endif  // EMAILHANDLER_H
