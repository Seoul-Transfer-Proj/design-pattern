#ifndef FANCOMMNAND_H
#define FANCOMMNAND_H

#include "command.h"
#include "../vendor/living_room_fan.h"

class FanHighCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanHighCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() { livingRoomFan->on(); }
};

class FanOffCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanOffCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() { livingRoomFan->off(); }
};

#endif 