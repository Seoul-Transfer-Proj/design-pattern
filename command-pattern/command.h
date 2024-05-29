#ifndef COMMAND_H
#define COMMAND_H

#include "receiver.h"

class Command {
private:
  Receiver* receiver;
public:
  Command(Receiver* receiver) {
    this->receiver = receiver;
    cout << "Command: 주문서 생성 완료" << endl;
  }
  void execute() { receiver->action(); }
};

#endif