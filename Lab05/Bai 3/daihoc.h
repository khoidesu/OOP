#ifndef DAIHOC_H
#define DAIHOC_H

#include "sinhvien.h"
using namespace std;

class daihoc : public sinhvien
{
private:
    string tenlv;
    double dlv;

public:
    void Nhap() override;
    void Xuat() override;
    bool isTN() override;
    int Loai() override;
};

#endif
