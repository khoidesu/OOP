#ifndef CDAGIAC_CPP
#define CDAGIAC_CPP

#include <iostream>
#include "cDiem.h"
#include "cDaGiac.h"
using namespace std;

cDaGiac::cDaGiac()
{
    n = 0;
    dsDinh = nullptr;
}

cDaGiac::cDaGiac(int _n, cDiem *_dsDinh)
{
    n = _n;
    dsDinh = new cDiem[_n];
    for (int i = 0; i < _n; i++)
    {
        dsDinh[i] = _dsDinh[i];
    }
}

cDaGiac::cDaGiac(const cDaGiac &other)
{
    n = other.n;
    dsDinh = new cDiem[n];
    for (int i = 0; i < n; i++)
    {
        dsDinh[i] = other.dsDinh[i];
    }
}

cDaGiac::~cDaGiac()
{
    delete[] dsDinh;
}

void cDaGiac::Nhap()
{
    cout << "Nhap so dinh: ";
    cin >> n;
    dsDinh = new cDiem[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap dinh " << i + 1 << ": \n";
        dsDinh[i].Nhap();
    }
}

void cDaGiac::Xuat()
{
    cout << "So dinh: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Dinh " << i + 1 << ": \n";
        dsDinh[i].Xuat();
    }
}

/*
Hàm tính khoảng cách giữa 2 điểm
input: 2 điểm A, B
output: khoảng cách giữa A và B bằng công thức = sqrt((B.x - A.x)^2 + (B.y - A.y)^2)
*/
double dist(cDiem a, cDiem b)
{
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

/*
Hàm tính chu vi đa giác
input: n điểm A1, A2, ..., An
output: chu vi đa giác ABC... bằng công thức = AB + BC + ... + AN
(i+1)%n: chỉ số của đỉnh tiếp theo
*/
double cDaGiac::ChuVi()
{
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        res += dist(dsDinh[i], dsDinh[(i + 1) % n]);
    }
    return res;
}

/*
Hàm tính diện tích đa giác
input: n điểm A1, A2, ..., An
output: diện tích đa giác ABC... bằng công thức = 1/2 * |A1.B2 + A2.B3 + ... + An.B1|
(i+1)%n: chỉ số của đỉnh tiếp theo
*/
double cDaGiac::DienTich()
{
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        res += dsDinh[i].getX() * dsDinh[(i + 1) % n].getY();
        res -= dsDinh[(i + 1) % n].getX() * dsDinh[i].getY();
    }
    return abs(res) / 2;
}

/*
Hàm dịch chuyển đa giác
input: Điểm vec
output: đa giác ABC... sau khi dịch chuyển
*/
void cDaGiac::TinhTien(cDiem vec)
{
    for (int i = 0; i < n; i++)
    {
        dsDinh[i].setX(dsDinh[i].getX() + vec.getX());
        dsDinh[i].setY(dsDinh[i].getY() + vec.getY());
    }
}

/*
Hàm quay đa giác
input: góc quay
output: đa giác ABC... sau khi quay
*/
void cDaGiac::Quay(double goc)
{
    for (int i = 0; i < n; i++)
    {
        dsDinh[i].setX(dsDinh[i].getX() * cos(goc) - dsDinh[i].getY() * sin(goc));
        dsDinh[i].setY(dsDinh[i].getX() * sin(goc) + dsDinh[i].getY() * cos(goc));
    }
}

/*
Hàm phóng to đa giác
input: hệ số phóng to
output: đa giác ABC... sau khi phóng to
*/
void cDaGiac::PhongTo(double heso)
{
    for (int i = 0; i < n; i++)
    {
        dsDinh[i].setX(dsDinh[i].getX() * heso);
        dsDinh[i].setY(dsDinh[i].getY() * heso);
    }
}

/*
Hàm thu nhỏ đa giác
input: hệ số thu nhỏ
output: đa giác ABC... sau khi thu nhỏ
*/
void cDaGiac::ThuNho(double heso)
{
    for (int i = 0; i < n; i++)
    {
        dsDinh[i].setX(dsDinh[i].getX() / heso);
        dsDinh[i].setY(dsDinh[i].getY() / heso);
    }
}

#endif
