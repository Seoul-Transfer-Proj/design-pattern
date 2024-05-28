#ifndef SIZE_H
#define SIZE_H

#include <iostream>
using namespace std;

enum class Size { TALL, GRANDE, VENTI, Unknown };

string getStringFromSize(Size size);

Size getSizeFromString(const string& sizeStr);

#endif