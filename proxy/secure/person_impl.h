#ifndef PERSON_IMPL_H
#define PERSON_IMPL_H

#include "person.h"

class PersonImpl : public Person {
private:
  int ratingCount = 0;
public:
  string getName () override { return name; }
  string getGender () override { return gender; }
  string getInterest () override { return interest; }
  int getGeekRating () override {
    if (ratingCount == 0) { return 0; }
    return geekRating/ratingCount;
  }

  void setName (const string& name) override { this->name = name; }
  void setGender (const string& gender) override { this->gender = gender; }
  void setInterest (const string& interest) override { this->interest = interest; }
  void setGeekRating (int rating) override {
    this->geekRating = ratingCount + rating;
    ratingCount ++;
  }
};

#endif