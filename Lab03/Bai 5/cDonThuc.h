#ifndef CDONTHUC_H
#define CDONTHUC_H
#include <iostream>
using namespace std;

class cDonThuc
{
    int heSo;
    int soMu;

public:
    cDonThuc();
    cDonThuc(int h, int m);
    cDonThuc(const cDonThuc &other);
    void Nhap();
    void setHeSo(int h);
    void setSoMu(int m);
    int getHeSo();
    int getSoMu();
    void Xuat();
    int TinhX(int x);
    void DaoHam();
    friend istream &operator>>(istream &is, cDonThuc &dt);
    friend ostream &operator<<(ostream &os, const cDonThuc &dt);
    cDonThuc operator+(const cDonThuc &dt);
    void Tong(cDonThuc &dt);
};
#endif
