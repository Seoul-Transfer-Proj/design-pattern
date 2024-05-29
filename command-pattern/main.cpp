#include "remote_control.h"
#include "./command/light.h"
#include "./command/living_room_fan.h"
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

  // 주방 전구 제어 슬롯 추가
  KitchenLight* kitchenLight = new KitchenLight();
  Slot* kitchenLightSlot = new Slot("kitchenLight");
  kitchenLightSlot->setOnCommand(new LightOnCommand(kitchenLight));
  kitchenLightSlot->setOffCommand(new LightOffCommand(kitchenLight));
  remoteControl->addSlot(kitchenLightSlot);

  // 거실 선풍기 제어 슬롯 추가
  LivingRoomFan* livingRoomFan = new LivingRoomFan();
  Slot* livingRoomFanSlot = new Slot("LivingRoomFan");
  livingRoomFanSlot->setOnCommand(new FanHighCommand(livingRoomFan));
  livingRoomFanSlot->setOffCommand(new FanOffCommand(livingRoomFan));
  remoteControl->addSlot(livingRoomFanSlot);

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

  // 스테레오 재생
  remoteControl->onCommmandexecute("Stereo");
  // 거실 선풍기 켜기
  remoteControl->onCommmandexecute("LivingRoomFan");
  // 차고 문 열기
  remoteControl->onCommmandexecute("GarageDoor");

  // 거실 선풍기 끄기
  remoteControl->offCommmandexecute("LivingRoomFan");

  return 0;
};