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
overload toán tử cộng
*/
CDate CDate::operator+(int other)
{
    CDate res;
    auto inmonth = [](int m, int y)
    {
        auto isnhuan = [](int y)
        {
            return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
        };
        int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isnhuan(y))
            days[2] = 29;
        return days[m];
    };

    res.d = d + other;
    res.m = m;
    res.y = y;

    while (res.d > inmonth(res.m, res.y))
    {
        res.d -= inmonth(res.m, res.y);
        res.m++;

        if (res.m > 12)
        {
            res.m = 1;
            res.y++;
        }
    }
    return res;
}
/*
overload toán tử trừ
*/
CDate CDate::operator-(int other)
{
    CDate res;
    auto inmonth = [](int m, int y)
    {
        auto isnhuan = [](int y)
        {
            return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
        };
        int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (isnhuan(y))
            days[2] = 29;
        return days[m];
    };

    res.d = d - other;
    res.m = m;
    res.y = y;

    while (res.d <= 0)
    {
        res.m--;

        if (res.m <= 0)
        {
            res.m = 12;
            res.y--;
        }
        res.d += inmonth(res.m, res.y);
    }
    return res;
}
//++date
CDate &CDate::operator++()
{
    *this = *this + 1;
    return *this;
}
// date++
CDate CDate::operator++(int)
{
    CDate tmp = *this;

    ++(*this);

    return tmp;
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
overload toán tử trừ ngày với ngày
*/
int operator-(CDate a, CDate b)
{
    auto today = [](CDate x)
    {
        int d = x.d;
        int m = x.m;
        int y = x.y;
        auto isnhuan = [](int y)
        {
            return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
        };
        int daysMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int res = (y - 1) * 365;

        res += (y - 1) / 4;
        res -= (y - 1) / 100;
        res += (y - 1) / 400;

        for (int i = 1; i < m; i++)
            res += daysMonth[i];

        if (isnhuan(y) && m > 2)
            res++;
        res += d;

        return res;
    };
    return abs(today(b) - today(a));
}