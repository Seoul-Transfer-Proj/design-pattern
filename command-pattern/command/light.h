#ifndef LIGHTCOMMAND_H
#define LIGHTCOMMAND_H

#include "../vendor/light.h"
#include "command.h"

class LightOnCommand : public Command {
private:
  Light* light;
public:
  LightOnCommand(Light* light) { this->light = light; }
  void execute() { light->on(); }
};

class LightOffCommand : public Command {
private:
  Light* light;
public:
  LightOffCommand(Light* light) { this->light = light; }
  void execute() { light->off(); }
}; 

#endif