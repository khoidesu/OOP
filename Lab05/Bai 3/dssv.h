#ifndef DSSV_H
#define DSSV_H

#include "sinhvien.h"
using namespace std;

class dssv
{
private:
    int n;
    vector<sinhvien *> a;

public:
    void Nhap();
    void Xuat();
    void XuatTN();
    void XuatKTN();
    void SVCDCaoNhat();
    void SVDHCaoNhat();
    void CntKTN();
};

#endif