#include "SimplePureVirtualClass.h"

SimplePureVirtualClass::~SimplePureVirtualClass() { cout << "SimplePureVirtualClass Destructor" << endl; }

string SimplePureVirtualClass::pureVirtualMethod() {
  string str = "SimplePureVirtualClass pureVirtualMethod";
  cout << str << endl;
  return str;
}
