#ifndef INVOKER_H
#define INVOKER_H

#include "command.h"

class Invoker {
private:
  Command* command;
public:
  Invoker(Command* command) { setCommand(command); }

  void setCommand(Command* command) {
    this->command = command;
     cout << "웨이터: 전달할 주문서를 가져왔어요." << endl;
  }
  void execute() {
    cout << "웨이터: 주문 내용을 전달했어요." << endl;
    this->command->execute();
  }
};

#endif