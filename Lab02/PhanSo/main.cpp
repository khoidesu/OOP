#include <bits/stdc++.h>
#include "cPhanSo.cpp"
using namespace std;
signed main()
{
    // nhập phân số
    cPhanSo a, b;
    cout << "Phan so A:\n";
    a.Nhap();
    cout << endl;
    cout << "Phan so B:\n";
    b.Nhap();
    cout << endl;

    // rút gọn phân số
    a.RutGon();
    b.RutGon();

    // xuat phan so
    cout << "Phan so A sau khi rut gon: ";
    a.Xuat();
    cout << endl;
    cout << "Phan so B sau khi rut gon: ";
    b.Xuat();
    cout << endl;
    cout << endl;

    // tính toán
    cPhanSo tong = a.Tong(b);
    cPhanSo hieu = a.Hieu(b);
    cPhanSo tich = a.Tich(b);
    cPhanSo thuong = a.Thuong(b);

    cout << "Tong cua 2 phan so A va B la: ";
    tong.Xuat();
    cout << "\nHieu cua 2 phan so A va B la: ";
    hieu.Xuat();
    cout << "\nTich cua 2 phan so A va B la: ";
    tich.Xuat();
    cout << "\nThuong cua 2 phan so A va B la: ";
    thuong.Xuat();
    cout << endl;

    // so sánh a và b
    int chk = a.SoSanh(b);
    if (chk == 1)
        cout << "A > B";
    else if (chk == -1)
        cout << "A < B";
    else
        cout << "A == B";
    return 0;
}