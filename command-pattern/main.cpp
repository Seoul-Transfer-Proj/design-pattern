#include "remote_control.h"
#include "./command/light.h"
#include "./command/fan/high.h"
#include "./command/fan/medium.h"
#include "./command/fan/low.h"
#include "./command/fan/living_room_fan.h"
#include "./command/garage_door.h"
#include "./command/stereo.h"
#include "./command/macro.h"

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
  LightOnCommand* lightOnCommand = new LightOnCommand(livingRoomLight);
  LightOffCommand* lightOffCommand = new LightOffCommand(livingRoomLight);

  Slot* livingRoomLightSlot = new Slot("LivingRoomLight");
  livingRoomLightSlot->setOnCommand(lightOnCommand);
  livingRoomLightSlot->setOffCommand(lightOnCommand);
  remoteControl->addSlot(livingRoomLightSlot);

  // 차고 문 제어 슬롯 추가
  GarageDoor* garageDoor = new GarageDoor();
  Slot* garageDoorSlot = new Slot("GarageDoor");
  GarageDoorOpenCommand* garageDoorOpenCommand = new GarageDoorOpenCommand(garageDoor);
  GarageDoorCloseCommand* garageDoorCloseCommand = new GarageDoorCloseCommand(garageDoor);

  garageDoorSlot->setOnCommand(garageDoorOpenCommand);
  garageDoorSlot->setOffCommand(garageDoorCloseCommand);
  remoteControl->addSlot(garageDoorSlot);

  // 스테레오 제어 슬롯 추가
  Stereo* stereo = new Stereo();
  Slot* stereoSlot = new Slot("Stereo");
  StereoOnForCD* stereoOnForCD = new StereoOnForCD(stereo);
  StereoOffForCD* stereoOffForCD = new StereoOffForCD(stereo);

  stereoSlot->setOnCommand(stereoOnForCD);
  stereoSlot->setOffCommand(stereoOffForCD);
  remoteControl->addSlot(stereoSlot);

  vector<Command*> onCommands;
  onCommands.push_back(lightOnCommand);
  onCommands.push_back(garageDoorOpenCommand);
  onCommands.push_back(stereoOnForCD);

  vector<Command*> offCommands;
  offCommands.push_back(lightOffCommand);
  offCommands.push_back(garageDoorCloseCommand);
  offCommands.push_back(stereoOffForCD);

  MacroCommand* macroOnCommand = new MacroCommand(onCommands);
  MacroCommand* macroOffCommand = new MacroCommand(offCommands);

  Slot* macroSlot = new Slot("Macro");
  macroSlot->setOnCommand(macroOnCommand);
  macroSlot->setOffCommand(macroOffCommand);

  remoteControl->addSlot(macroSlot);

  // macro 슬롯 on
  remoteControl->onCommmandexecute("Macro");
  // macro 슬롯 off
  remoteControl->offCommmandexecute("Macro");


// 선풍기 리모컨 작동 예제
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

  // 선풍기 켜기
  remoteControl->onCommmandexecute("FanSpeedLow");
  // 선풍기 2단으로 설정.
  remoteControl->onCommmandexecute("FanSpeedMedium");
  // 선풍기 3단으로 설정.
  remoteControl->onCommmandexecute("FanSpeedHigh");
  // 선풍기 2단으로 돌아감.
  remoteControl->undoCommandExecute();

  return 0;
};