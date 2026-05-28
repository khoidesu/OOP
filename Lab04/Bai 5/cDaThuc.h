#ifndef CDATHUC_H
#define CDATHUC_H
#include "cDonThuc.h"
using namespace std;
class cDaThuc
{
private:
    int n;
    cDonThuc *donThuc;

public:
    cDaThuc();
    cDaThuc(int _n, cDonThuc *_donThuc);
    cDaThuc(const cDaThuc &other);
    ~cDaThuc();
    void Nhap();
    void Xuat();
    cDaThuc &operator=(const cDaThuc &dt);
    cDaThuc operator+(const cDaThuc &dt);
    cDaThuc operator-(const cDaThuc &dt);
    cDaThuc operator*(const cDaThuc &dt);
    cDaThuc operator/(const cDaThuc &dt);
};
#endif
