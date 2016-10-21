// Copyright 2016 Gerardo Teruel
#ifndef COMMAND_NOACTIONCOMMAND_H
#define COMMAND_NOACTIONCOMMAND_H

#include <string>
#include "ArticlePublishedCommand.hpp"

class NoActionCommand : public ArticlePublishedCommand {
 public:
  virtual void execute(std::string outlet, std::string title, std::string author) {

  }
};

#endif  // COMMAND_NOACTIONCOMMAND_H
