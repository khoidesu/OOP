#include <iostream>
#include "cphanso.h"
using namespace std;

/*
constructor
*/
cphanso::cphanso(int t, int m)
{
    tu = t;
    mau = m;
}
/*
overload toán tử cộng
*/
cphanso cphanso::operator+(cphanso &other)
{
    cphanso res;
    res.tu = this->tu * other.mau + other.tu * this->mau;
    res.mau = this->mau * other.mau;
    return res;
}
/*
overload toán tử trừ
*/
cphanso cphanso::operator-(cphanso &other)
{
    cphanso res;
    res.tu = this->tu * other.mau - other.tu * this->mau;
    res.mau = this->mau * other.mau;
    return res;
}
/*
overload toán tử nhân
*/
cphanso cphanso::operator*(cphanso &other)
{
    cphanso res;
    res.tu = this->tu * other.tu;
    res.mau = this->mau * other.mau;
    return res;
}
/*
overload toán tử chia
*/
cphanso cphanso::operator/(cphanso &other)
{
    cphanso res;
    res.tu = this->tu * other.mau;
    res.mau = this->mau * other.tu;
    return res;
}
/*
overload toán tử bằng
*/
bool cphanso::operator==(cphanso &other)
{
    if (this->tu == other.tu && this->mau == other.mau)
        return true;
    return false;
}
/*
overload toán tử lớn hơn
*/
bool cphanso::operator>(cphanso &other)
{
    double x = (double)this->tu / this->mau;
    double y = (double)other.tu / other.mau;
    if (x > y)
        return true;
    return false;
}
/*
overload toán tử bé hơn
*/
bool cphanso::operator<(cphanso &other)
{
    double x = (double)this->tu / this->mau;
    double y = (double)other.tu / other.mau;
    if (x < y)
        return true;
    return false;
}
/*
overload toán tử cin>>
*/
istream &operator>>(istream &is, cphanso &ts)
{
    cout << "Nhap tu so: ";
    is >> ts.tu;
    cout << "Nhap mau so: ";
    is >> ts.mau;
    return is;
}
/*
overload toán tử cout<<
*/
ostream &operator<<(ostream &os, cphanso &ts)
{
    if (ts.mau == 0)
    {
        os << "oo";
        return os;
    }
    else if (ts.tu == 0)
    {
        os << 0;
        return os;
    }
    else
    {
        if (ts.mau < 0)
        {
            ts.mau = -ts.mau;
            ts.tu = -ts.tu;
        }

        if (ts.tu % ts.mau == 0)
        {
            cout << ts.tu / ts.mau;
            return os;
        }
        os << ts.tu << "/" << ts.mau;
    }
    return os;
}
