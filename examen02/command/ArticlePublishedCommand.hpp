#ifndef COMMAND_ARTICLEPUBLISHEDCOMMAND_H
#define COMMAND_ARTICLEPUBLISHEDCOMMAND_H

#include <string>

class ArticlePublishedCommand {
public:
  virtual void execute(std::string outlet, std::string title, std::string author) = 0;
};

#endif  // COMMAND_ARTICLEPUBLISHEDCOMMAND_H
