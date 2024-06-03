#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


class Duck {
public:
  string name;
  int weight;

  Duck(string name, int weight) : name(name), weight(weight) {}

  string toString() {
    return name + "체중: " + to_string(weight);
  }

  bool operator<(const Duck& other) const {
    return this->weight < other.weight;
  }

  bool operator>(const Duck& other) const {
    return this->weight > other.weight;
  }

  bool operator==(const Duck& other) const {
    return this->weight == other.weight;
  }

  int compareTo(const Duck& otherDuck) {
    if (this->weight < otherDuck.weight) {
      return -1;
    } else if (this->weight == otherDuck.weight) {
      return 0;
    } else {
      return 1;
    }
  }
};

int main() {
  vector<Duck> ducks = 
  { Duck("도날드", 8), 
  Duck("루이지", 12), 
  Duck("스크루지", 14), 
  Duck("루이", 5) };

  sort(ducks.begin(), ducks.end(), [](Duck& a, const Duck& b) {
    return a.compareTo(b) < 0;
  });

  for (auto duck : ducks) {
    cout << duck.toString() << endl;
  }
};