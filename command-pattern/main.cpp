#include "remote_control.h"
#include "./command/light.h"
#include "./command/fan/high.h"
#include "./command/fan/medium.h"
#include "./command/fan/low.h"
#include "./command/fan/living_room_fan.h"
#include "./command/garage_door.h"
#include "./command/stereo.h"

#include "./vendor/living_room.h"
#include "./vendor/kitchen_light.h"
#include "./vendor/living_room_fan.h"
#include "./vendor/garage_door.h"
#include "./vendor/stereo.h"

int main() {
  // 리모컨 만들기
  RemoteControl* remoteControl = new RemoteControl();

  // 거실 전구 제어 슬롯 추가
  LivingRoomLight* livingRoomLight = new LivingRoomLight();
  Slot* livingRoomLightSlot = new Slot("LivingRoomLight");
  livingRoomLightSlot->setOnCommand(new LightOnCommand(livingRoomLight));
  livingRoomLightSlot->setOffCommand(new LightOffCommand(livingRoomLight));
  remoteControl->addSlot(livingRoomLightSlot);

  // 거실 선풍기 제어 슬롯 추가
  LivingRoomFan* livingRoomFan = new LivingRoomFan();

  FanOffCommand* fanOffCommand = new FanOffCommand(livingRoomFan);
  // Slot* livingRoomFanSlot = new Slot("LivingRoomFan");
  // livingRoomFanSlot->setOnCommand(new FanCommand(livingRoomFan));
  // livingRoomFanSlot->setOffCommand(fanOffCommand);
  // remoteControl->addSlot(livingRoomFanSlot);

  // 선풍기 속도를 3단으로 설정.
  Slot* fanHighSlot = new Slot("FanSpeedHigh");
  fanHighSlot->setOnCommand(new FanHighCommand(livingRoomFan));
  fanHighSlot->setOffCommand(fanOffCommand);
  remoteControl->addSlot(fanHighSlot);

  // 선풍기 속도를 2단으로 설정.
  Slot* fanMediumSlot = new Slot("FanSpeedMedium");
  fanMediumSlot->setOnCommand(new FanMediumCommand(livingRoomFan));
  fanMediumSlot->setOffCommand(fanOffCommand);
  remoteControl->addSlot(fanMediumSlot);

  // 선풍기 속도를 1단으로 설정.
  Slot* fanLowSlot = new Slot("FanSpeedLow");
  fanLowSlot->setOnCommand(new FanLowCommand(livingRoomFan));
  fanLowSlot->setOffCommand(fanOffCommand);
  remoteControl->addSlot(fanLowSlot);

  // 차고 문 제어 슬롯 추가
  GarageDoor* garageDoor = new GarageDoor();
  Slot* garageDoorSlot = new Slot("GarageDoor");
  garageDoorSlot->setOnCommand(new GarageDoorOpenCommand(garageDoor));
  garageDoorSlot->setOffCommand(new GarageDoorCloseCommand(garageDoor));
  remoteControl->addSlot(garageDoorSlot);

  // 스테레오 제어 슬롯 추가
  Stereo* stereo = new Stereo();
  Slot* stereoSlot = new Slot("Stereo");
  stereoSlot->setOnCommand(new StereoOnForCD(stereo));
  stereoSlot->setOffCommand(new StereoOffForCD(stereo));
  remoteControl->addSlot(stereoSlot);

  // 선풍기 켜기
  remoteControl->onCommmandexecute("FanSpeedLow");
  // 선풍기 2단으로 설정.
  remoteControl->onCommmandexecute("FanSpeedMedium");
  // 선풍기 3단으로 설정.
  remoteControl->onCommmandexecute("FanSpeedHigh");
  // 선풍기 2단으로 돌아감.
  remoteControl->undoCommandExecute();

  // 스테레오 재생
  remoteControl->onCommmandexecute("Stereo");

  // 차고 문 열기
  remoteControl->onCommmandexecute("GarageDoor");

  
  return 0;
};