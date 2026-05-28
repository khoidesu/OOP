#include <bits/stdc++.h>
#include "csophuc.h"
/*
constructor lớp số phức
*/
csophuc::csophuc(double t, double a)
{
    thuc = t;
    ao = a;
}
/*
overload toán tử cộng
*/
csophuc csophuc::operator+(csophuc &other)
{
    csophuc res;
    res.thuc = this->thuc + other.thuc;
    res.ao = this->ao + other.ao;
    return res;
}
/*
overload toán tử trừ
*/
csophuc csophuc::operator-(csophuc &other)
{
    csophuc res;
    res.thuc = this->thuc - other.thuc;
    res.ao = this->ao - other.ao;
    return res;
}
/*
overload toán tử nhân
*/
csophuc csophuc::operator*(csophuc &other)
{
    csophuc res;
    res.thuc = this->thuc * other.thuc - this->ao * other.ao;
    res.ao = this->thuc * other.ao + this->ao * other.thuc;
    return res;
}
/*
overload toán tử chia
*/
csophuc csophuc::operator/(csophuc &other)
{
    csophuc res;
    res.thuc = (this->thuc * other.thuc + this->ao * other.ao) / (other.thuc * other.thuc + other.ao * other.ao);
    res.ao = (this->ao * other.thuc - this->thuc * other.ao) / (other.thuc * other.thuc + other.ao * other.ao);
    return res;
}
/*
overload toán tử dấu bằng
*/
bool csophuc::operator==(csophuc &other)
{
    if (this->thuc == other.thuc && this->ao == other.ao)
        return true;
    return false;
}
/*
overload toán tử dấu khác (không == thì !=)
*/
bool csophuc::operator!=(csophuc &other)
{
    if (*this == other)
        return false;
    return true;
}
/*
overload cin >>
*/
istream &operator>>(istream &is, csophuc &ts)
{
    cout << "Nhap phan thuc: ";
    is >> ts.thuc;
    cout << "Nhap phan ao: ";
    is >> ts.ao;
    return is;
}
/*
overload cout <<
*/
ostream &operator<<(ostream &os, csophuc &ts)
{
    if (ts.thuc == 0 && ts.ao == 0)
        os << 0;
    else
    {
        if (ts.thuc != 0)
        {
            os << ts.thuc;
            if (ts.ao < 0)
                os << "-";
            else if (ts.ao > 0)
                os << "+";
        }
        if (ts.ao != 0)
        {
            if (abs(ts.ao) == 1)
                os << "i";
            else
                os << abs(ts.ao) << "i";
        }
    }
    return os;
}