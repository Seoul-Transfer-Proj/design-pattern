#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer_interface.h"


class Subject {
    public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() = 0;
};

#endif