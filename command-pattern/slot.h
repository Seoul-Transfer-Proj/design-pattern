#ifndef SLOT_H
#define SLOT_H

#include "./command/command.h"
#include <iostream>
using namespace std;

class Slot {
private:
  Command* on;
  Command* off;
  string description;
public:
  Slot(string slotDescription) { description = slotDescription; } 
  string getDescription() { return description; }

  Command* getOnCommand() { return on; }
  void setOnCommand(Command* onCommand) { on = onCommand; }

  Command* getOffCommand() { return off; }
  void setOffCommand(Command* offCommand) { off = offCommand; }
};

#endif 