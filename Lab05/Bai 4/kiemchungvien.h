#ifndef KIEMCHUNGVIEN_H
#define KIEMCHUNGVIEN_H

#include "nhanvien.h"
using namespace std;

class kiemchungvien : public nhanvien
{
private:
    int loi;

public:
    void Nhap();
    void Xuat();
    long long Luong();
    int Loai();
};

#endif