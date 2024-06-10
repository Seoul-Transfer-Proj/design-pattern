#include "boiler_object.h"

void ChocolateBoilerObject::fill() {
  if (isempty()) {
    empty = false;
    boiled = false;
  }
}

void ChocolateBoilerObject::drain() {
  if (!isempty() && isBoiled()) {
    empty = true;
  }
}

void ChocolateBoilerObject::boil() {
  if (!isempty() && !isBoiled()) {
    boiled = true;
  }    
}
