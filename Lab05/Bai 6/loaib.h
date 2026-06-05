#ifndef LOAIB_H
#define LOAIB_H

#include "khachhang.h" 
using namespace std;


class loaib : public khachhang {
private:
    int sonam;
public:
    void Nhap() override;
    void Xuat() override;
    long long sotien() override;
};

#endif