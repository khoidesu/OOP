#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H

#include "nhanvien.h"
using namespace std;

class laptrinhvien : public nhanvien
{
private:
    int ot;

public:
    void Nhap();
    void Xuat();
    long long Luong();
    int Loai();
};

#endif