// Copyright 2016 Gerardo Teruel
#ifndef PATTERNS_COMMAND_COMMAND_H
#define PATTERNS_COMMAND_COMMAND_H

class Command {
 public:
  virtual void execute() = 0;
};

#endif  // PATTERNS_COMMAND_COMMAND_H
