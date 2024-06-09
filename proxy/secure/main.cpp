#include "person_impl.h"
#include "dynamic_proxy.h"
#include "invoke_handler.h"

int main() {

  Person* person = new PersonImpl();

  InvokeHandler* ownerInvokeHandler = new OwnerInvokeHandler();
  DynamicProxy* ownerProxy = new DynamicProxy(person, ownerInvokeHandler);

  InvokeHandler* nonOwnerInvokeHandler = new NonOwnerInvokeHandler();
  DynamicProxy* nonOwnerProxy = new DynamicProxy(person, nonOwnerInvokeHandler);

  ownerProxy->setName("창환");
  ownerProxy->setGender("남자");
  ownerProxy->setInterest("컴퓨터");
  // 자신의 rating은 조작 불가능
  ownerProxy->setGeekRating(9);
  
  // 타인이 창환의 rating은 수정 가능.
  nonOwnerProxy->setGeekRating(3);
  // 타인이 창환의 다른 정보는 수정 불가.
  nonOwnerProxy->setGender("여자");
  nonOwnerProxy->setInterest("뷰티");
  nonOwnerProxy->setName("성현");


  std::cout << "Name: " << person->getName() << std::endl;
  std::cout << "Gender: " << person->getGender() << std::endl;
  std::cout << "Interest: " << person->getInterest() << std::endl;
  std::cout << "Geek Rating: " << person->getGeekRating() << std::endl;

  delete person;
  delete ownerInvokeHandler;
  delete ownerProxy;
  delete nonOwnerInvokeHandler;
  delete nonOwnerProxy;

  return 0;
};