#include <bits/stdc++.h>
#include "cDiem.cpp"
#include "cDaGiac.cpp"

int main()
{
    cDaGiac dg, tmp;
    dg.Nhap();
    dg.Xuat();
    tmp = dg;
    cout << "Chu vi: " << dg.ChuVi() << endl;
    cout << "Dien tich: " << dg.DienTich() << endl;

    cout << "Nhap toa do tinh tien: \n";
    cDiem vec;
    vec.Nhap();
    tmp.TinhTien(vec);
    tmp.Xuat();
    tmp = dg;

    cout << "Nhap goc quay: \n";
    double goc;
    cin >> goc;
    tmp.Quay(goc);
    tmp.Xuat();
    tmp = dg;

    cout << "Nhap he so phong to: \n";
    double heso;
    cin >> heso;
    tmp.PhongTo(heso);
    tmp.Xuat();
    tmp = dg;

    cout << "Nhap he so thu nho: \n";
    cin >> heso;
    tmp.ThuNho(heso);
    tmp.Xuat();
    tmp = dg;

    return 0;
}