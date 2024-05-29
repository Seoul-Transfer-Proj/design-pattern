#ifndef FANMEDIUMCOMMAND_H
#define FANMEDIUMCOMMAND_H

#include "../command.h"
#include "../../vendor/living_room_fan.h"

class FanMediumCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanMediumCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() {
    livingRoomFan->medium();
  }
  void undo() {
    livingRoomFan->low();
  }
};

#endif