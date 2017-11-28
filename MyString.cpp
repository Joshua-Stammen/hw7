//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"


MyString::MyString()
{
    internalCString = make_unique<char[]>(nlength);
    nlength = 0;
}

MyString::MyString(const char *character)
{
    int val = 0;
    int size = 0;

    while(character[val] != '\0'){
        size++;
        val++;
    };

    nlength = size + 1;
    internalCString = make_unique<char[]>(nlength);

    val = 0;

    if (val <= size)
    {
        for (int i = 0; i <= size; ++i)
        {
            internalCString[val] = character[val];
            val++;
        }
    }else if (val > size)
    {
        internalCString[val] = '\0';
    }


    return;
}

int MyString::getNlength(){
    int size;

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


