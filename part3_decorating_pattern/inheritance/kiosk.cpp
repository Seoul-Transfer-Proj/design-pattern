#include "./condiment/mocha.h"
#include "./condiment/whip.h"
#include "./condiment/milk.h"
#include "./beverages/houseblend.h"
#include "./const/size.h"
#include <iostream>
using namespace std;

int main() {
  cout << "원하시는 음료의 사이즈를 입력해주세요: " << endl;
  string input;
  cin >> input;

  Size size = getSizeFromString(input);

  Beverage* beverage2 = new HouseBlend();
  beverage2->setSize(size);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Milk(beverage2);
  beverage2 = new Whip(beverage2);

  cout << "주문하신 " << beverage2->getDescription() << "의 가격은: " << beverage2->cost() << "원 입니다." << endl;

  return 0;
};
