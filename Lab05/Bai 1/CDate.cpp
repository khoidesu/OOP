#include <bits/stdc++.h>
#include "CDate.h"
using namespace std;

/*
constructor
*/
CDate::CDate(int nd, int nm, int ny)
{
    d = nd;
    m = nm;
    y = ny;
}

/*
overload toán tử cin>>
*/
istream &operator>>(istream &is, CDate &ts)
{
    cout << "Nhap ngay: ";
    is >> ts.d;
    cout << "Nhap thang: ";
    is >> ts.m;
    cout << "Nhap nam: ";
    is >> ts.y;
    return is;
}
/*
overload toán tử cout<<
*/
ostream &operator<<(ostream &os, CDate &ts)
{
    os << ts.d << "/" << ts.m << "/" << ts.y << endl;
    return os;
}

/*
so sanh 2 ngay
*/
int CDate::compare(CDate other)
{
    if (this->y == other.y)
    {
        if (this->m == other.m)
        {
            if (this->d > other.d)
                return -1;
            else if (this->d < other.d)
                return 1;
            else
                return 0;
        }
        else if (this->m > other.m)
            return -1;
        else
            return 1;
    }
    else if (this->y > other.y)
        return -1;
    else
        return 1;
}

CDate &CDate::operator=(const CDate &other)
{
    if (this != &other)
    {
        d = other.d;
        m = other.m;
        y = other.y;
    }

    return *this;
}