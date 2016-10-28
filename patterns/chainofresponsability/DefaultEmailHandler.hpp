// Copyright 2016 Gerardo Teruel
#ifndef DEFAULTEMAILHANDLER_H
#define DEFAULTEMAILHANDLER_H

#include <iostream>
#include "EmailHandler.hpp"
#include "Email.hpp"

class DefaultEmailHandler : public EmailHandler {
 protected:
  virtual bool isHandled(const Email& email) {
    return true;
  }

  virtual void handleEmail(const Email& email) {
    std::cout << "New defualt email with title: " << email.getTitle()
      << std::endl;
  }
};

#endif  // DEFAULTEMAILHANDLER_H
