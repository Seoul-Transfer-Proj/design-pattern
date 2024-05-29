#ifndef CLIENT_H
#define CLIENT_H

#include "client.h"
#include "command.h"
#include "receiver.h"

#include <iostream>
using namespace std;

class Client {
private:
  Command* command;
public:
  Client(Receiver* receiver) { createCommand(receiver); }

  void createCommand(Receiver* receiver) {
    this->command = new Command(receiver);
    cout << "Client: 주문서 작성 완료" << endl;
  }
  Command* getCommand() { return command; }
};

#endif