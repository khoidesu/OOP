#ifndef GIAODICH_H
#define GIAODICH_H
#include <bits/stdc++.h>
#include "CDate.h"
using namespace std;
class giaodich
{
protected:
    string maso;
    CDate ngay;
    int dongia;
    double dientich;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double ThanhTien() = 0;
    virtual int Loai() = 0;

    CDate getDate();
};

#endif