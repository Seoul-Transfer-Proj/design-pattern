#ifndef FANLOWCOMMAND_H
#define FANLOWCOMMAND_H

#include "../command.h"
#include "../../vendor/living_room_fan.h"

class FanLowCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanLowCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() {
    livingRoomFan->low();
  }
  void undo() {
    livingRoomFan->off();
  }
};

#endif