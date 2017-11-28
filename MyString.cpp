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

int MyString::getNlength(){
    int size;
    internalCString = make_unique<char[]>(nlength);

    for (int i = 0; i < nlength; i++)
    {
        size++;
        i++;
    }
    return size;
}

char *MyString::getInternalCString() const
{
    
    return internalCString.get();
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


