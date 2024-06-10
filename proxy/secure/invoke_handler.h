#ifndef INVOKE_HANDLER_H
#define INVOKE_HANDLER_H

#include "person.h"
#include <string>
#include <iostream>
#include <functional>
#include <unordered_map>

class InvokeHandler {
public:
    virtual ~InvokeHandler() = default;
    virtual void invoke(const std::string& methodName, Person* person, const std::vector<std::string>& args) = 0;
};

class OwnerInvokeHandler : public InvokeHandler {
public:
  void invoke(const std::string& methodName, Person* person, const std::vector<std::string>& args) override {
    if (methodName == "setGeekRating") {
      std::cout << "SetGeekRating을 호출할 수 없어요!" << std::endl;
    } else if (methodName == "setName") {
        person->setName(args[0]);
         std::cout << "설정된 이름: " << person->getName() << std::endl;
    } else if (methodName == "setGender") {
        person->setGender(args[0]);
        std::cout << "설정된 성별: " << person->getGender() << std::endl;
    } else if (methodName == "setInterest") {
        person->setInterest(args[0]);
        std::cout << "설정된 관심사: " << person->getInterest() << std::endl;
    }
  }
};

class NonOwnerInvokeHandler : public InvokeHandler {
public:
  void invoke(const std::string& methodName, Person* person, const std::vector<std::string>& args) {
    if (methodName == "setGeekRating") {
        person->setGeekRating(std::stoi(args[0]));
    } else if (methodName == "setName") {
        std::cout << "You cannot change the name!" << std::endl;
    } else if (methodName == "setGender") {
        std::cout << "You cannot change the gender!" << std::endl;
    } else if (methodName == "setInterest") {
        std::cout << "You cannot change the interest!" << std::endl;
    }
  }
};

#endif
