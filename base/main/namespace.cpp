#include "namespace.h"
#include <iostream>
using namespace std;

void ns1::method() { cout << "ns1::method" << endl; }

void ns1::ns11::method() { cout << "ns1::ns11::method" << endl; }

void ns1::ns11::ns111::method() { cout << "ns1::ns11::ns111::method" << endl; }

void ns2::method() { cout << "ns2::method" << endl; }
