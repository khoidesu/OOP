#ifndef LOAIA_H
#define LOAIA_H

#include "khachhang.h" 
using namespace std;


class loaia : public khachhang {
public:
    void Nhap() override;
    void Xuat() override;
    long long sotien() override;
};

#endif