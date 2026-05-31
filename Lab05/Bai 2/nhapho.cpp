#include "nhapho.h"
using namespace std;

void nhapho::Nhap()
{
    giaodich::Nhap();
    cout << "Nhap loai nha: ";
    cin >> loainha;
    cout << "Nhap dia chi: ";
    cin.ignore();
    getline(cin, diachi);
}

void nhapho::Xuat()
{
    giaodich::Xuat();
    cout << "Loai nha pho: ";
    cin.ignore();
    getline(cin, loainha);
    cout << "Dia chi: ";
    cout << diachi << endl;
}

double nhapho::ThanhTien()
{
    if (loainha == "Cao cap")
        return dientich * dongia;
    else if (loainha == "Thuong")
        return dientich * dongia * 0.9;
}

int nhapho::Loai()
{
    return 2;
}