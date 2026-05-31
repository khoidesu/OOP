#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <bits/stdc++.h>
#include "CDate.h"
using namespace std;
class nhanvien
{
protected:
    string name;
    CDate dob;
    int salary;

public:
    virtual void Nhap();
    virtual void Xuat();
    virtual int Luong() = 0;
    virtual int Loai() = 0;
    CDate DOB();
    void setLuong(int val);
};

#endif