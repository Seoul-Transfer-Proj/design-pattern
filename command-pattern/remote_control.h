#ifndef INVOKER_H
#define INVOKER_H

#include "./command/command.h"
#include "slot.h"
#include <vector>

class RemoteControl {
private:
  vector<Slot*> slots;
public:
  // slot이 7개가 아니고 7개까지만 slot 추가 가능
  void addSlot(Slot* slot) {
    if (slots.size() < 8 && slots.size() != 7 ) {
      slots.push_back(slot);
    } 
  }

  void onCommmandexecute(string slotDescription) {
    cout << "리모컨: onCommand 실행." << endl;
    for (auto slot : slots) {
      if (slot->getDescription() == slotDescription ) {
        slot->getOnCommand()->execute();
        break;
      }
    }
  }
  
  void offCommmandexecute(string slotDescription) {
    cout << "리모컨: offCommand 실행." << endl;
    for (auto slot : slots) {
      if (slot->getDescription() == slotDescription) {
        slot->getOffCommand()->execute();
        break;
      }
    }
  }
};

#endif