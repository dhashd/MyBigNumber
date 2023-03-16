#include <iostream>
using namespace std;

#include "MyBigNumber.h"

int main() {
    MyBigNumber a, b, c;
    a.input();
    b.input();

    cout<< "a = ";
    a.output();

    cout<< "b = ";
    b.output();

    return 0;
}