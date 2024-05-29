#ifndef FANHIGHCOMMAND_H
#define FANHIGHCOMMAND_H

#include "../command.h"
#include "../../vendor/living_room_fan.h"

class FanHighCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanHighCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() {
    livingRoomFan->high();
  }
  void undo() {
    livingRoomFan->medium();
  }
};

#endif