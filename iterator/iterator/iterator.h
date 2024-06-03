#ifndef ITERATOR_H
#define ITERATOR_H

#include "../menuitem.h"

class Iterator {
public:
// hasNext() - 어떤 배열이 있는데 다음 요소가 있는지 체크
  virtual bool hasNext() = 0;
  // 배열의 요소가 있는지는 배열의 크기를 get하고
  // int numberOfArray 같은 걸 count하면서
  // 배열의 크기보다 커지면 false를 뱉는다?

// next() - 해당 배열의 다음 요소에 접근
  virtual MenuItem next() = 0;
};

#endif