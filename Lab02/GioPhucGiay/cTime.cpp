#include <iostream>
#include "cTime.h"
using namespace std;

void cTime::Nhap()
{
    cout << "Nhap gio: ";
    cin >> iGio;
    cout << "Nhap phut: ";
    cin >> iPhut;
    cout << "Nhap giay: ";
    cin >> iGiay;
}

void cTime::Xuat()
{
    cout << iGio << " Gio " << iPhut << " Phut " << iGiay << " Giay";
}

cTime cTime::TinhCongThemMotGiay()
{
    cTime res;
    res.iGio = iGio;
    res.iPhut = iPhut;
    res.iGiay = iGiay + 1;
    if (res.iGiay == 60)
    {
        res.iGiay = 0;
        res.iPhut++;
        if (res.iPhut == 60)
        {
            res.iPhut = 0;
            res.iGio++;
            if (res.iGio == 24)
            {
                res.iGio = 0;
            }
        }
    }
    return res;
}