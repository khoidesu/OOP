#include <iostream>
using namespace std;

class CDate
{
private:
    int d, m, y;

public:
    CDate(int nd = 1, int nm = 1, int ny = 1);
    CDate operator+(int other);
    CDate operator-(int other);
    friend int operator-(CDate a, CDate b);
    CDate operator++(int);
    CDate &operator++();
    friend istream &operator>>(istream &is, CDate &ts);
    friend ostream &operator<<(ostream &os, CDate &ts);
};