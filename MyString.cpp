//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

/*!
 * Constructor
 */
MyString::MyString()
{
    internalCString = make_unique<char[]>(nlength);
    nlength = 0;
}
/*!
 * Declares val and size then checks to see if the character is null
 * @param character
 */
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
/*!
 * Get the length of the string
 * @return size
 */
int MyString::getNlength(){
    int size;

    for (int i = 0; i < nlength; i++)
    {
        size++;
        i++;
    }
    return size;
}
/*!
 * GetsInternalCString
 * @return what the InternalCstring got
 */
char *MyString::getInternalCString() const
{
    
    return internalCString.get();
}

/*!
 * Takes the string and reverses the order
 */
void MyString::reverseit()
{
    char temp[nlength];
    for(int i = 0; i <= nlength; i++){
        if(i < nlength)
        {
            temp[i] = internalCString[nlength -2 -i];
        }
        else if (i >= nlength)
        {
            temp[i] = '\0';
        }
    }

    for (int i = 0; i <= nlength; ++i)
    {
        if(i < nlength)
        {
            internalCString[i] = temp[i];
        }
        else if (i >= nlength)
        {
            internalCString[i] = '\0';
        }
    }

}
/*!
 * Compares to if String is lhs or rhs or if they are equal
 * @param lhs
 * @param rhs
 * @return
 */
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


ostream &operator<<(ostream &os, const MyString &myString) {
    os << myString.getInternalCString();
    return os;
}


