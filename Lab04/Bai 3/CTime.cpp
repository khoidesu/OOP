#include <bits/stdc++.h>
#include "CTime.h"
using namespace std;
/*
constructor
*/
CTime::CTime(int _h, int _m, int _s)
{
    h = _h;
    m = _m;
    s = _s;
}
/*
overload toán tử cộng
*/
CTime CTime::operator+(int other)
{
    int sum = s + 60 * m + h * (60 * 60);
    sum += other;

    CTime res;
    res.h = (sum / 3600) % 24;
    res.m = (sum % 3600) / 60;
    res.s = sum % 60;
    return res;
}
/*
overload toán tử trừ
*/
CTime CTime::operator-(int other)
{
    int sum = s + 60 * m + h * (60 * 60);
    sum -= other;

    CTime res;
    res.h = (sum / 3600) % 24;
    res.m = (sum % 3600) / 60;
    res.s = sum % 60;
    return res;
}
// ++a
CTime &CTime::operator++()
{
    s++;

    if (s > 59)
    {
        s = 0;
        m++;

        if (m > 59)
        {
            m = 0;
            h++;

            if (h > 23)
                h = 0;
        }
    }

    return *this;
}

// a++
CTime CTime::operator++(int)
{
    CTime tmp = *this;

    ++(*this);

    return tmp;
}
/*
overload toán tử nhập cin>>
*/
istream &operator>>(istream &is, CTime &ts)
{
    cout << "Nhap gio: ";
    is >> ts.h;
    cout << "Nhap phut: ";
    is >> ts.m;
    cout << "Nhap giay: ";
    is >> ts.s;
    return is;
}
/*
overload toán tử xuất cout<<
*/
ostream &operator<<(ostream &os, CTime &ts)
{
    if (ts.h < 10)
        os << "0";
    os << ts.h << ":";

    if (ts.m < 10)
        os << "0";
    os << ts.m << ":";

    if (ts.s < 10)
        os << "0";
    os << ts.s;
    return os;
}