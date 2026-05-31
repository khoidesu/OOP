#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <bits/stdc++.h>
using namespace std;

class sinhvien
{
protected:
    string mssv;
    string hoten;
    string diachi;
    int tinchi;
    double dtb;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual bool isTN() = 0;
    virtual int Loai() = 0;
    double getDiem();
};

#endif
