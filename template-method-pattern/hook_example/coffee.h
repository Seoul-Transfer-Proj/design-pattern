#ifndef COFFEE_H
#define COFFEE_H

#include "caffein_beverage.h"

class Coffee : public CaffeinBeverage {
public:
  void brew() override { cout << "커피 우려내는 중.." << endl; }
  void addCondiments () override { cout << "우유랑 설탕 추가" << endl; }

  bool customerWantsCondiments() override {
    bool isCustomerWantsCondiments = false;
    cout << "우유랑 설탕을 추가하시겠어요?: " << endl;
    string input;
    cin >> input;

    // 고객이 입력한 문자열 소문자 변환
    for (int i = 0; i < input.size(); i++) {
      input[i] = tolower(input[i]);
    }

    // 고객이 입력한 대답의 맨 앞이 소문자 y라면 우유랑 설탕 추가
    if (input[0] == 'y') {
      isCustomerWantsCondiments = true;
    }
    return isCustomerWantsCondiments;
  }
};

#endif 