#include <iostream>
using namespace std;

class CTime
{
private:
    int h, m, s;

public:
    CTime(int _h = 0, int _m = 0, int _s = 0);
    CTime operator+(int other);
    CTime operator-(int other);
    friend int operator-(CTime &a, CTime &b);
    CTime &operator++();
    CTime operator++(int);
    friend istream &operator>>(istream &is, CTime &ts);
    friend ostream &operator<<(ostream &os, CTime &ts);
};