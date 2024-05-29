#include "client.h"
#include "invoker.h"

int main() {
  // 고객이 주문서 작성
  Receiver* receiver = new Bulb();
  Client* client = new Client(receiver);
  // 고객이 작성한 주문서를 웨이터가 가져감.
  Invoker* invoker = new Invoker(client->getCommand());
  // 주방장이 뭘 해야하는지만 알려줌.
  invoker->execute();

  return 0;
};