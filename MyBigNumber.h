
#ifndef MyBigNumber_MyBigNumber_H
#define MyBigNumber_MyBigNumber_H


class MyBigNumber {
private:
    char number[101];

public:
    MyBigNumber();
    MyBigNumber(char *);
    void input();
    void output();
    MyBigNumber add(MyBigNumber);
    MyBigNumber sub(MyBigNumber);
    MyBigNumber mul(MyBigNumber);
    MyBigNumber div(MyBigNumber);

    bool isGreaterThan(MyBigNumber);
    bool isLessThan(MyBigNumber);
    bool isEquals(MyBigNumber);
};


#endif 
