#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  string gender;
  string interest;
  int geekRating;
public:
  virtual ~Person() {}
  virtual string getName () = 0;
  virtual string getGender () = 0;
  virtual string getInterest () = 0;
  virtual int getGeekRating () = 0;

  virtual void setName (const string& name) = 0;
  virtual void setGender (const string& gender) = 0;
  virtual void setInterest (const string& interest) = 0;
  virtual void setGeekRating (int rating) = 0;

};

#endif