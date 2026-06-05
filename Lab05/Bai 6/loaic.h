#ifndef LOAIC_H
#define LOAIC_H

#include "khachhang.h" 
using namespace std;


class loaic : public khachhang {
public:
    void Nhap() override;
    void Xuat() override;
    long long sotien() override;
};

#endif