//
// Created by Hugo Valle on 11/12/17.
//
#include <memory>
#include "MyString.h"

MyString::MyString() {

}

MyString::MyString(const char *cString) {

}

int MyString::getNlength() const {
    for (int i = 0; i < )
    return nlength;
}

char *MyString::getInternalCString() const {

    return nullptr;
}

void MyString::reverseit() {

}

int MyString::comspareStr(const MyString &lhs, const MyString &rhs) {
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


