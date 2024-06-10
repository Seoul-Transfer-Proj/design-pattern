#include "adapter.h"
#include "pacade.h"

int main() {
  Duck* mallardDuck = new MallardDuck();
  Turkey* turkey = new WildTurkey();
  Duck* duckAdapter = new DuckAdapter(turkey);
  Turkey* turkeyAdapter = new TurkeyAdapter(mallardDuck);

  cout << "오리가 말하길" << endl;
  // 나는 오리지만 내 특징으로도 칠면조 기능을 사용하고 싶어
  turkeyAdapter->gobble();
  turkeyAdapter->fly();

  cout << "칠면조가 말하길" << endl;
  // 나는 칠면조지만 내 특징으로도 오리의 기능을 사용하고 싶어
  duckAdapter->quack();
  duckAdapter->fly();

  // Pacade 
  cout << "Simple Interface" << endl;
  Pacade pacade = Pacade(mallardDuck, turkey);
  pacade.quack();
  pacade.fly();

  return 0;  
};