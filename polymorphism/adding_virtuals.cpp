#include <iostream>
#include <string>
using namespace std;

class Pet {
  string pname;
public:
  Pet(const string& petName) : pname(petName) {}
  virtual string name() { return pname; }
  virtual string speak() { return ""; }
};

class Dog : public Pet {
public:
  Dog(const string& petName) : Pet(petName) {}
  virtual string sit() {
    return Pet::name() + " sits";
  }
  string speak() override {
    return Pet::name() + " says 'Bark'!";
  }
};

int main() {
  
  Pet* p[] = { new Pet("generic"), new Dog("bob") };
  cout << "p[0]->speak()= " << p[0]->speak() << endl;
  cout << "p[1]->speak()= " << p[1]->speak() << endl;
  //! cout << "p[1]->sit()= " << p[1]->sit() << endl;
  return 0;  
};