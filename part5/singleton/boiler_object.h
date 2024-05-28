#ifndef CHOCOBOILEROBJECT_H
#define CHOCOBOILEROBJECT_H

class ChocolateBoilerObject {
private:
  bool empty = true;
  bool boiled = false;
  ChocolateBoilerObject() {}
public:
  static ChocolateBoilerObject& getInstance() { 
    static ChocolateBoilerObject instance;
    return instance;
   }
  void fill();
  void drain();
  void boil();
  bool isempty() { return empty; }
  bool isBoiled() { return boiled; }

  ChocolateBoilerObject(const ChocolateBoilerObject& obj) = delete;
  ChocolateBoilerObject& operator =(const ChocolateBoilerObject&) = delete;
};

#endif 