#ifndef DSNV_H
#define DSNV_H
#include "nhanvien.h"
using namespace std;

class dsnv
{
private:
    int n;
    vector<nhanvien *> a;

public:
    void Nhap();
    void Xuat();
    void DuoiTB();
    void nvMax();
    void nvMin();
    void nvltMax();
    void nvkcMin();
};

#endif