#include <exception>
#include <iostream>
using namespace std;

class SimpleException : exception {
public:
  const char *what() const throw() { return "simple exception"; }
};