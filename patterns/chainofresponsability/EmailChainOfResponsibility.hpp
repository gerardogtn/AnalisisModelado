// Copyright 2016 Gerardo Teruel
#ifndef EMAILCHAINOFRESPONSIBILITY_H
#define EMAILCHAINOFRESPONSIBILITY_H

#include "Email.hpp"
#include "EmailHandler.hpp"
#include "SpamEmailHandler.hpp"
#include "SocialEmailHandler.hpp"
#include "PurchasesEmailHandler.hpp"
#include "DefaultEmailHandler.hpp"

class EmailChainOfResponsibility {
 private:
  EmailHandler* emailHandler;

 public:
  EmailChainOfResponsibility() {
    EmailHandler* spamHandler = new SpamEmailHandler();
    EmailHandler* socialHandler = new SocialEmailHandler();
    EmailHandler* purchasesHandler = new PurchasesEmailHandler();
    purchasesHandler->setNext(new DefaultEmailHandler());
    socialHandler->setNext(purchasesHandler);
    spamHandler->setNext(socialHandler);
    this->emailHandler = spamHandler;
  }

  virtual ~EmailChainOfResponsibility() {
    delete emailHandler;
  }

  void handle(const Email& email) {
    emailHandler->handle(email);
  }
};

#endif  // EMAILCHAINOFRESPONSIBILITY_H
