#include <iostream>
#include "cDiem.cpp"
#include "cTamGiac.cpp"
using namespace std;

int main()
{
    cTamGiac tg, tmp;
    tg.Nhap();
    tg.Xuat();
    tmp = tg;
    cout << "Chu vi: " << tg.ChuVi() << endl;
    cout << "Dien tich: " << tg.DienTich() << endl;
    cout << "Loai tam giac: ";
    switch (tg.Loai())
    {
    case -1:
        cout << "Khong phai tam giac" << endl;
        break;
    case 0:
        cout << "Tam giac thuong" << endl;
        break;
    case 1:
        cout << "Tam giac deu" << endl;
        break;
    case 2:
        cout << "Tam giac can" << endl;
        break;
    case 3:
        cout << "Tam giac vuong" << endl;
        break;
    }

    cout << "Tinh Tien: \n";
    cDiem vec;
    vec.Nhap();
    tmp.TinhTien(vec);
    tmp.Xuat();
    tmp = tg;

    cout << "Nhap goc quay: \n";
    double goc;
    cin >> goc;
    tmp.Quay(goc);
    tmp.Xuat();
    tmp = tg;

    cout << "Nhap he so phong to: \n";
    double heso;
    cin >> heso;
    tmp.PhongTo(heso);
    tmp.Xuat();
    tmp = tg;

    cout << "Nhap he so thu nho: \n";
    cin >> heso;
    tmp.ThuNho(heso);
    tmp.Xuat();
    tmp = tg;

    return 0;
}