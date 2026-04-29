#include <bits/stdc++.h>
#include "cDate.cpp"
#include "cNhanVienSX.cpp"
#include "cDSNhanVienSX.cpp"
using namespace std;

int main()
{
    cDSNhanVienSX ds;
    ds.Nhap();
    ds.Xuat();

    cNhanVienSX luongThapNhat = ds.LuongThapNhat();
    cout << "Luong thap nhat: \n";
    luongThapNhat.Xuat();
    cout << endl;

    int tongLuong = ds.TongLuong();
    cout << "Tong luong: " << tongLuong << endl;

    cNhanVienSX tuoiCaoNhat = ds.TuoiCaoNhat();
    cout << "Tuoi cao nhat: \n";
    tuoiCaoNhat.Xuat();
    cout << endl;

    ds.SortLuong();
    cout << "Danh sach nhan vien sau khi sap xep theo luong: " << endl;
    ds.Xuat();

    return 0;
}