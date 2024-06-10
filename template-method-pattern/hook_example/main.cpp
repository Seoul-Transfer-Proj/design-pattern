#include "coffee.h"
#include "tea.h"

int main() {
  cout << "카페 라떼 주문하기" << endl;  
  CaffeinBeverage* coffee = new Coffee();
  coffee->prepareRecipe();

  cout << "레몬 차 주문하기" << endl;
  CaffeinBeverage* tea = new Tea();
  tea->prepareRecipe();

  return 0;
};