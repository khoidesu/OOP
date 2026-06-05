#ifndef DSKH_H
#define DSKH_H

#include "khachhang.h"
using namespace std;
class dskh {
private:
    int x, y, z;
    vector <khachhang*> a;
    vector <khachhang*> b;
    vector <khachhang*> c;
public:
    void Nhap();
    void Xuat();
};

#endif