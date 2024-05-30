#ifndef MACRO_H
#define MACRO_H

#include "command.h"
#include <iostream>
using namespace std;
#include <vector>

class MacroCommand : public Command {
private:
  vector<Command*> commands;

public:
  MacroCommand(vector<Command*> commands) { this->commands = commands;}
  void execute() {
    for (auto command : commands) {
      command->execute();
    }
  }
  void undo() {
    for (auto command : commands) {
      command ->undo();
    }
  }
};

#endif 