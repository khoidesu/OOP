#ifndef VANPHONG_H
#define VANPHONG_H
#include "nhanvien.h"
using namespace std;

class vanphong : public nhanvien
{
private:
    int lcb;
    int prod;

public:
    void Nhap() override;
    void Xuat() override;
    int Luong() override;
    int Loai() override;
};

#endif