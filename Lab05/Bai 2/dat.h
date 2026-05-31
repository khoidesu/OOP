#ifndef DAT_H
#define DAT_H

#include "giaodich.h"
using namespace std;

class dat : public giaodich
{
private:
    string loaidat;

public:
    void Nhap() override;
    void Xuat() override;
    double ThanhTien() override;
    int Loai() override;
};

#endif