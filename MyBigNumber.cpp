#include "MyBigNumber.h"
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

MyBigNumber::MyBigNumber() {
    for (int i = 0; i < 100; ++i) {
        number[i] = '0';
    }
    number[100] = '\0';
}

MyBigNumber::MyBigNumber(char *v) {
    int len = strlen(v);
//123456
//456
    for (int i = 0; i < len; i++) {
        number[100 - i] = v[len - 1 - i];
    }
}

bool MyBigNumber::isGreaterThan(MyBigNumber other) {
    string a = string(number);
    string b = string(other.number);
    return a.compare(b) > 0 ? true : false;
}

bool MyBigNumber::isEquals(MyBigNumber other) {
    string a = string(number);
    string b = string(other.number);
    return a.compare(b) == 0 ? true : false;
}

bool MyBigNumber::isLessThan(MyBigNumber other) {
    string a = string(number);
    string b = string(other.number);
    return a.compare(b) < 0 ? true : false;
}

MyBigNumber MyBigNumber::add(MyBigNumber other) {
    MyBigNumber res;
    return res;
}

MyBigNumber MyBigNumber::sub(MyBigNumber other) {
    BigInteger res;
    return res;
}

MyBigNumber MyBigNumber::mul(MyBigNumber other) {
    MyBigNumber res;
    return res;
}

MyBigNumber MyBigNumber::div(MyBigNumber other) {
    BigInteger res;
    return res;
}

void MyBigNumber::input() {
    int len;
    char x[101];
    cout<<"Enter your big number: ";
    cin>> x;
    len = strlen(x);
    for (int i = 0; i < len; ++i) {
        number[100-len+i] = x[i];
    }
}

void BMyBigNumber::output() {
    int pos = 0;
    for (int i = 0; i < 100; ++i) {
        if(number[i] != '0'){
            pos = i;
            break;
        }
    }

    for (int j = pos; j < 100; ++j) {
        cout<< number[j];
    }
    cout<< endl;
}

