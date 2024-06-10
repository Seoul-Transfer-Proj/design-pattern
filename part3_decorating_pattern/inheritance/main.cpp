#include "./condiment/mocha.h"
#include "./condiment/whip.h"
#include "./condiment/milk.h"
#include "./condiment/mint.h"
#include "./condiment/sirup.h"
#include "./beverages/houseblend.h"
#include "./beverages/sitrus.h"
#include "./const/size.h"
#include "./condiment/beverage_size.h"


#include <iostream>
using namespace std;

int main() {
  cout << "원하시는 음료의 사이즈를 입력해주세요: " << endl;
  string input;
  cin >> input;
  Size size = getSizeFromString(input);

  Beverage* sitrusMintTee = new Sitrus();
  sitrusMintTee->setSize(size);
  sitrusMintTee = new Mint(sitrusMintTee);
  sitrusMintTee = new Sirup(sitrusMintTee);

  Beverage* beverage2 = new HouseBlend();
  beverage2->setSize(size);
  beverage2 = new BeverageSize(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Mocha(beverage2);
  beverage2 = new Milk(beverage2);
  beverage2 = new Whip(beverage2);

  cout << "주문하신 " << sitrusMintTee->getDescription() << "의 가격은: " << sitrusMintTee->cost() << "원 입니다." << endl;
  return 0;
};
