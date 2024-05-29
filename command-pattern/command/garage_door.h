#ifndef GARAGEDOORCOMMAND_H
#define GARAGEDOORCOMMAND_H

#include "command.h"
#include "../vendor/garage_door.h"

class GarageDoorOpenCommand : public Command {
private:
  GarageDoor* garageDoor;
public:
  GarageDoorOpenCommand(GarageDoor* garageDoor) { this->garageDoor = garageDoor; }
  void execute() { this->garageDoor->up(); }
  void undo() { garageDoor->down(); }
};

class GarageDoorCloseCommand : public Command {
private:
  GarageDoor* garageDoor;
public:
  GarageDoorCloseCommand(GarageDoor* garageDoor) { this->garageDoor = garageDoor; }
  void execute() { this->garageDoor->down(); }
  void undo() { garageDoor->up(); }
};

#endif