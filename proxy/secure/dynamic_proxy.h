#ifndef DYNAMIC_PROXY_H
#define DYNAMIC_PROXY_H

#include "person.h"
#include "invoke_handler.h"
#include <vector>
#include <string>
#include <sstream>

class DynamicProxy : public Person {
private:
    Person* person;
    InvokeHandler* invokeHandler;

public:
    DynamicProxy(Person* person, InvokeHandler* handler) : person(person), invokeHandler(handler) {}

    string getName() override {
        return person->getName();
    }

    string getGender() override {
        return person->getGender();
    }

    string getInterest() override {
        return person->getInterest();
    }

    int getGeekRating() override {
        return person->getGeekRating();
    }

    void setName(const string& name) override {
        invokeHandler->invoke("setName", person, {name});
    }

    void setGender(const string& gender) override {
        invokeHandler->invoke("setGender", person, {gender});
    }

    void setInterest(const string& interest) override {
        invokeHandler->invoke("setInterest", person, {interest});
    }

    void setGeekRating(int rating) override {
        string ratingString = to_string(rating);
        invokeHandler->invoke("setGeekRating", person, {ratingString});
    }
};

#endif
