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
  Client(Command* command) {
    this->command = command;
    cout << "Client: 주문서 작성 완료" << endl;
  }

  void setCommand(Command* command) {
    this->command = command;
    cout << "Client: 주문서 작성 완료" << endl;
  }
  
  Command* getCommand() { return command; }
};

#endif