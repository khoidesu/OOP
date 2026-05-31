#ifndef NHAPHO_H
#define NHAPHO_H

#include "giaodich.h"
using namespace std;

class nhapho : public giaodich
{
private:
    string loainha;
    string diachi;

public:
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    int Loai() override;
};

#endif