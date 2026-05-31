#ifndef DSNV_H
#define DSNV_H
#include "nhanvien.h"
class dsnv
{
private:
    int n;
    vector<nhanvien *> a;

public:
    void Nhap();
    void Xuat();
    void TongLuong();
    void MinLuong();
    void LonTuoiNhat();
};

#endif