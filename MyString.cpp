//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

MyString::MyString()
{
  return;
}

MyString::MyString(const char *cString)
{
    return;
}

int MyString::getNlength() const {
    for (int i = 0; i < getNlength(); i++)
    {
        cout<< "Done"<<endl;
    }
    return nlength;
}

char *MyString::getInternalCString() const
{
    int MyString::*Pnlength = &MyString::nlength;

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


