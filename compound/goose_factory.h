#ifndef GOOSE_FACTORY_H
#define GOOSE_FACTORY_H

#include "goose.h"

class GooseFactory {
public:
  virtual Goose* createGoose() = 0;
};

#endif