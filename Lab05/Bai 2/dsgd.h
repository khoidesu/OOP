#ifndef DSGD_H
#define DSGD_H
#include "giaodich.h"
using namespace std;

class dsgd
{
private:
    int n;
    vector<giaodich *> a;

public:
    void Nhap();
    void Xuat();
    void Count();
    void Average();
    void findMax();
    void findX();
};

#endif