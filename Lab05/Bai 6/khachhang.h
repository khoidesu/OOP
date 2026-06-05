#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <bits/stdc++.h>
using namespace std;

class khachhang {
protected:
    string ten;
    int slg;
    long long dongia;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long sotien() = 0;
};

#endif