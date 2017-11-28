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

int MyString::compareStr(MyString &lhs, MyString &rhs) {
    if (lhs.nlength < rhs.nlength) {
        return -1;
    } else if (rhs.nlength < lhs.nlength){
        return 1;
    } else if (lhs.nlength == rhs.nlength) {
        int returnInt = 0;
        for (int i = 0; i < lhs.nlength; i++){
            if(lhs.internalCString[i] == rhs.internalCString[i]){
                returnInt = 0;
            } else {
                returnInt = -2;
                i = lhs.nlength + 1;
            }
            return returnInt;
        }
    }
}


/*ostream &operator<<(ostream &os) {
    return <#initializer#>;
}*/


