#ifndef FANCOMMNAND_H
#define FANCOMMNAND_H

#include "../command.h"
#include "../../vendor/living_room_fan.h"

class FanCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
  int prevSpeed;
public:
  FanCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() { 
    prevSpeed = livingRoomFan->getSpeed();
    if (prevSpeed == 0) {
      livingRoomFan->on();
    } else if (prevSpeed == 1) {
      livingRoomFan->medium();
    } else if (prevSpeed == 2) {
      livingRoomFan->high();
    }
  }
  void undo() {
    if (prevSpeed == livingRoomFan->HIGH) {
      livingRoomFan->high();
    } else if (prevSpeed == livingRoomFan->MEDIUM) {
      livingRoomFan->medium();
    } else if (prevSpeed==livingRoomFan->LOW) {
      livingRoomFan->low();
    } else {
      livingRoomFan->off();
    }
  }
};

class FanOffCommand : public Command {
private:
  LivingRoomFan* livingRoomFan;
public:
  FanOffCommand(LivingRoomFan* livingRoomFan) { this->livingRoomFan = livingRoomFan; }
  void execute() { livingRoomFan->off(); }
  void undo() { livingRoomFan->on(); }
};

#endif 