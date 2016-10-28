// Copyright 2016 Gerardo Teruel
#ifndef SPAMEMAILHANDLER_H
#define SPAMEMAILHANDLER_H

#include <iostream>
#include <string>
#include "EmailHandler.hpp"
#include "Email.hpp"

class SpamEmailHandler : public EmailHandler {
 protected:
  virtual bool isHandled(const Email& email) {
    std::size_t titlePos = email.getTitle().find("nigerian prince");
    std::size_t contentPos = email.getContent().find("nigerian prince");
    return titlePos != std::string::npos || contentPos != std::string::npos;
  }

  virtual void handleEmail(const Email& email) {
    std::cout << "New SPAM email with title: " << email.getTitle()
      << std::endl;
  }
};

#endif  // SPAMEMAILHANDLER_H
