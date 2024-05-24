#include "size.h"

string getStringFromSize(Size size) { 
  if (size == Size::TALL) { return "TALL"; }
  else if (size == Size::GRANDE ) { return "GRANDE"; }
  else if (size == Size::VENTI ) { return "VENTI"; }
  else { return "Unknown"; }
}

Size getSizeFromString(const string& sizeStr)  {
  if (sizeStr == "TALL") return Size::TALL;
  else if (sizeStr == "GRANDE") return Size::GRANDE;
  else if (sizeStr == "VENTI") return Size::VENTI;
  else return Size::Unknown;
}