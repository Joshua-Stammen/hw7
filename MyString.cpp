//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

MyString::MyString()
{
    internalCString = make_unique< >();

  return;
}

MyString::MyString(const char *cString)
{
    return;
}

int MyString::getNlength() const {
    for (int i = 0; i < getNlength(); i++)
    {

    }
    return nlength;
}

char *MyString::getInternalCString() const
{
    internalCString = make_unique<char[]>[];
    return 0;
}


void MyString::reverseit() {

}

int MyString::compareStr(const MyString &lhs, const MyString &rhs) {
    if (&lhs < &rhs) {
        return -1;
    } else if (&lhs > &rhs){
        return 1;
    } else if (&lhs == &rhs){
        return -2;
    } else if (&lhs == &rhs){
        return 0;
    }
}

/*ostream &operator<<(ostream &os) {
    return <#initializer#>;
}*/


