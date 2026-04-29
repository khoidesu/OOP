#ifndef CDAGIAC_H
#define CDAGIAC_H
#include "cDiem.h"
class cDaGiac
{
private:
    int n;
    cDiem *dsDinh;

public:
    cDaGiac();
    cDaGiac(int _n, cDiem *_dsDinh);
    cDaGiac(const cDaGiac &other);
    ~cDaGiac();
    void Nhap();
    void Xuat();

    double ChuVi();
    double DienTich();
    void TinhTien(cDiem vec);
    void Quay(double goc);
    void PhongTo(double heso);
    void ThuNho(double heso);
};

#endif