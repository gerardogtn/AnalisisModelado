// Copyright 2016 Gerardo Teruel
#ifndef PURCHASESEMAILHANDLER_H
#define PURCHASESEMAILHANDLER_H

#include <iostream>
#include <string>
#include "EmailHandler.hpp"
#include "Email.hpp"

class PurchasesEmailHandler : public EmailHandler {
 protected:
  virtual bool isHandled(const Email& email) {
    std::size_t titlePos = email.getTitle().find("purchase");
    std::size_t contentPos = email.getContent().find("purchase");
    return titlePos != std::string::npos || contentPos != std::string::npos;
  }

  virtual void handleEmail(const Email& email) {
    std::cout << "New PURCHASE email with title: " << email.getTitle()
      << std::endl;
  }
};

#endif  // PURCHASESEMAILHANDLER_H
