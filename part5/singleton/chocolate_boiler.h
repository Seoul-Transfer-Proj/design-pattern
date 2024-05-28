#ifndef CHOCOBOILER_H
#define CHOCOBOILER_H

class ChocolateBoiler {
private:
  bool empty = true;
  bool boiled = false;
  static ChocolateBoiler* chocolateBoilerInstance;
  ChocolateBoiler() {}
public:
  static ChocolateBoiler* getInstance() { 
    if (chocolateBoilerInstance == nullptr) {
      chocolateBoilerInstance = new ChocolateBoiler();
    }
    return chocolateBoilerInstance;
   }
  void fill();
  void drain();
  void boil();
  bool isempty() { return empty; }
  bool isBoiled() { return boiled; }
};

#endif 