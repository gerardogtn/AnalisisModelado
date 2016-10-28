// Copyright 2016 Gerardo Teruel
#ifndef SOCIALEMAILHANDLER_H
#define SOCIALEMAILHANDLER_H

#include <iostream>
#include <string>
#include "EmailHandler.hpp"
#include "Email.hpp"

class SocialEmailHandler : public EmailHandler {
 protected:
  virtual bool isHandled(const Email& email) {
    std::size_t titlePos = email.getTitle().find("facebook");
    std::size_t contentPos = email.getContent().find("facebook");
    return titlePos != std::string::npos || contentPos != std::string::npos;
  }

  virtual void handleEmail(const Email& email) {
    std::cout << "New SOCIAL email with title: " << email.getTitle()
      << std::endl;
  }
};

#endif  // SOCIALEMAILHANDLER_H
