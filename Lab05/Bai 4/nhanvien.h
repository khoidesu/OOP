#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
using namespace std;

class nhanvien
{
protected:
    string maso;
    string hoten;
    int tuoi;
    long long sdt;
    string email;
    long long lcb;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual long long Luong() = 0;
    virtual int Loai() = 0;
};

#endif