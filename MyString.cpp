//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

MyString::MyString()
{
}

MyString::MyString(const char *character)
{
    int val = 1;
    internalCString = make_unique<char[]>(nlength);
    if (nlength > 1)
        while(*character != '\0')
        {
            internalCString[val] = character[val];
            val++;
        }

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
    
    return 0;
}


void MyString::reverseit()
{

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


