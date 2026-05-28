#include <iostream>
#include "cDonThuc.h"
using namespace std;

void cDonThuc::setHeSo(int h)
{
    heSo = h;
}

void cDonThuc::setSoMu(int m)
{
    soMu = m;
}

cDonThuc::cDonThuc(const cDonThuc &other)
{
    heSo = other.heSo;
    soMu = other.soMu;
}

cDonThuc::cDonThuc()
{
    heSo = 0;
    soMu = 0;
}

cDonThuc::cDonThuc(int h, int m)
{
    heSo = h;
    soMu = m;
}

void cDonThuc::Nhap()
{
    cout << "Nhap he so: ";
    cin >> heSo;
    cout << "Nhap so mu: ";
    cin >> soMu;
}

void cDonThuc::Xuat()
{
    cout << "Don thuc: " << heSo << "x^" << soMu << endl;
}

int cDonThuc::getHeSo()
{
    return heSo;
}

int cDonThuc::getSoMu()
{
    return soMu;
}

int cDonThuc::TinhX(int x)
{
    int result = heSo;
    for (int i = 1; i <= soMu; i++)
    {
        result *= x;
    }
    return result;
}

/*
Hàm đạo hàm
input: không có
output: đa thức ABC... sau khi đạo hàm (vì là hàm bậc x nên chỉ cần áp dụng công thức n*a^(n-1))
*/
void cDonThuc::DaoHam()
{
    if (soMu > 0)
    {
        heSo *= soMu;
        soMu--;
    }
}

/*
Hàm nhập đa thức dùng cho cin >>
*/
std::istream &operator>>(std::istream &is, cDonThuc &dt)
{
    cout << "Nhap he so: ";
    is >> dt.heSo;
    cout << "Nhap so mu: ";
    is >> dt.soMu;
    return is;
}

/*
Hàm xuất đa thức dùng cho cout <<
*/
std::ostream &operator<<(std::ostream &os, const cDonThuc &dt)
{
    os << dt.heSo << "x^" << dt.soMu;
    return os;
}

cDonThuc cDonThuc::operator*(const cDonThuc &dt)
{
    return cDonThuc(heSo * dt.heSo, soMu + dt.soMu);
}

cDonThuc cDonThuc::operator/(const cDonThuc &dt)
{
    return cDonThuc(heSo / dt.heSo, soMu - dt.soMu);
}