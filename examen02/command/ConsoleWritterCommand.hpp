// Copyright 2016 Gerardo Teruel
#ifndef COMMAND_CONSOLEWRITERCOMMAND_H
#define COMMAND_CONSOLEWRITERCOMMAND_H

#include <iostream>
#include <string>
#include "ArticlePublishedCommand.hpp"

class ConsoleWritterCommand : public ArticlePublishedCommand {
 public:
  virtual void execute(std::string outlet, std::string title, std::string author) {
    std::cout << outlet << " just published: " << title << " written by: " << author << std::endl;
  }
};

#endif  // COMMAND_CONSOLEWRITERCOMMAND_H
