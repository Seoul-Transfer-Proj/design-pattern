#include "duck_example.cpp"

int main () {
  Duck* mallardDuck = new MallardDuck();
  mallardDuck->display();
  mallardDuck->performFly();
  mallardDuck->performQuack();
  delete mallardDuck;

  Duck* decoyDuck = new DecoyDuck();
  decoyDuck->display();
  decoyDuck->performFly();
  decoyDuck->performQuack();
  decoyDuck->setFlyBehavior(new FlyWithWings());
  (*decoyDuck).performFly();
  (*decoyDuck).setFlyBehavior(new FlyRocketPowered());
  (*decoyDuck).performFly();
  
  return 0;
}