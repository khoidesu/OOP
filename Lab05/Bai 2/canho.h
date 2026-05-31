#ifndef CANHO_H
#define CANHO_H

#include "giaodich.h"
using namespace std;

class canho : public giaodich
{
private:
    string macan;
    int vttang;

public:
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    int Loai() override;
};

#endif