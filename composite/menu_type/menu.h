#ifndef MENUCOMPONENT_H
#define MENUCOMPONENT_H

#include "../component.h"
#include <vector>

class Menu : public MenuComponent {
protected:
 vector<MenuComponent*> menuComponents;
 string name;
 string description;

public:
  Menu(string name, string description){ this->name = name; this->description = description; }

  string getName() override {
    return name;
  }
  string getDescription() override {
    return description;
  }

  void print () override {
    cout << "---------------------" << endl;
    cout << this->getName() << endl;
    cout << this->getDescription() << endl;
    cout << "---------------------" << endl;

    for (auto menu : menuComponents) {
      menu->print();
    }
  }

  void add(MenuComponent* menuComponent) override {
    this->menuComponents.push_back(menuComponent);
  }

  void remove(MenuComponent* menuComponent) override {
    // 인자로 받은 menuComponent와 같은 요소의 index 찾기
    int position = -1;
    for (int i = 0; i < this->menuComponents.size(); i++) {
      position = i;
      break;
    }

    if (position != -1) {
      this->menuComponents.erase(this->menuComponents.begin() + position);
    }
  }
  MenuComponent* getChild(int i) override {
    if (i >= 0 && i < this->menuComponents.size()) {
      return this->menuComponents[i]; // this->menuComponent.at(i)
    }
    return nullptr;
  }
};

#endif