#ifndef DEMO_CPP_SIMPLECLASS_H
#define DEMO_CPP_SIMPLECLASS_H
#include<iostream>
using namespace std;

class SimpleClass {
public:
    SimpleClass(int intField, const string &stringField);

    int getIntField() const;

    void setIntField(int intField);

    const string &getStringField() const;

    void setStringField(const string &stringField);

private:
    int intField;
    string string_field;
};


#endif //DEMO_CPP_SIMPLECLASS_H
