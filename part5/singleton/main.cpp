#include "boiler_object.h"
#include "chocolate_boiler.h"

int main() {
  ChocolateBoilerObject& instance = ChocolateBoilerObject::getInstance();
  instance.boil();

  ChocolateBoiler* instance1 = ChocolateBoiler::getInstance();
  instance1->boil();
};