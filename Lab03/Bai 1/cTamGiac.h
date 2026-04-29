#ifndef CTAMGIAC_H
#define CTAMGIAC_H

#include "cDiem.h"

class cTamGiac
{
private:
    cDiem A, B, C;

public:
    cTamGiac();
    cTamGiac(cDiem nA, cDiem nB, cDiem nC);
    cTamGiac(const cTamGiac &other);
    void Nhap();
    void Xuat();
    int Loai();
    double ChuVi();
    double DienTich();
    void TinhTien(cDiem vec);
    void Quay(double goc);
    void PhongTo(double heso);
    void ThuNho(double heso);
    // draw triangle
};

#endif