// Copyright 2016 Gerardo Teruel

#include "Email.hpp"
#include "EmailChainOfResponsibility.hpp"

int main(int argc, char const *argv[]) {
  EmailChainOfResponsibility emailChain;

  emailChain.handle(Email("SPAM", "nigerian prince"));
  emailChain.handle(Email("DEFAULT", "blagh blagh"));
  emailChain.handle(Email("facebook", "New friend"));
  emailChain.handle(Email("Amazon", "purchase"));
  return 0;
}
