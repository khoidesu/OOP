#ifndef SANXUAT_H
#define SANXUAT_H
#include "nhanvien.h"
using namespace std;

class sanxuat : public nhanvien
{
private:
    int songay;

public:
    void Nhap() override;
    void Xuat() override;
    int Luong() override;
    int Loai() override;
};

#endif