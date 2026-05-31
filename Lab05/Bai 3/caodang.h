#ifndef CAODANG_H
#define CAODANG_H

#include "sinhvien.h"
using namespace std;

class caodang : public sinhvien
{
private:
    double dtn;

public:
    void Nhap() override;
    void Xuat() override;
    bool isTN() override;
    int Loai() override;
};

#endif
