#include <iostream>
#include "cDaThuc.cpp"
#include "cDonThuc.cpp"
using namespace std;

int main()
{
    cDaThuc dt1, dt2;
    cout << "Nhap da thuc 1:" << endl;
    dt1.Nhap();
    cout << "Nhap da thuc 2:" << endl;
    dt2.Nhap();

    cDaThuc dtTong(dt1 + dt2);
    cout << "Tong hai da thuc:" << endl;
    dtTong.Xuat();

    cDaThuc dtHieu(dt1 - dt2);
    cout << "Hieu hai da thuc:" << endl;
    dtHieu.Xuat();

    return 0;
}