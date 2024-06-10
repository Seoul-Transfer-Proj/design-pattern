#include "chocolate_boiler.h"

void ChocolateBoiler::fill() {
  if (isempty()) {
    empty = false;
    boiled = false;
  }
}

void ChocolateBoiler::drain() {
  if (!isempty() && isBoiled()) {
    empty = true;
  }
}

void ChocolateBoiler::boil() {
  if (!isempty() && !isBoiled()) {
    boiled = true;
  }    
}
