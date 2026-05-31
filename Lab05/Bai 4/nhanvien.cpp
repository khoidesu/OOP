#include "nhanvien.h"
using namespace std;

void nhanvien::Nhap()
{
    cout << "Nhap ma nhan vien: ";
    cin >> maso;
    cout << "Nhap ho va ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Nhap so dien thoai: ";
    cin >> sdt;
    cout << "Nhap email: ";
    cin >> email;
    cout << "Nhap luong co ban: ";
    cin >> lcb;
}

void nhanvien::Xuat()
{
    cout << "Ma nhan vien: ";
    cout << maso << endl;
    cout << "Ho va ten: ";
    cout << hoten << endl;
    cout << "Tuoi: ";
    cout << tuoi << endl;
    cout << "So dien thoai: ";
    cout << sdt << endl;
    cout << "Email: ";
    cout << email << endl;
    cout << "Luong co ban: ";
    cout << lcb << endl;
}