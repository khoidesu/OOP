#include "dat.h"
using namespace std;

void dat::Nhap()
{
    giaodich::Nhap();
    cout << "Nhap loai dat: ";
    cin >> loaidat;
}

void dat::Xuat()
{
    giaodich::Xuat();
    cout << "Loai dat: ";
    cout << loaidat << endl;
}

double dat::ThanhTien()
{
    if (loaidat == "B" || loaidat == "C")
        return dientich * dongia;
    else if (loaidat == "A")
        return dientich * dongia * 1.5;
}

int dat::Loai()
{
    return 1;
}