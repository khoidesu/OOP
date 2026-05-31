#include "laptrinhvien.h"
using namespace std;

void laptrinhvien::Nhap()
{
    nhanvien::Nhap();
    cout << "Nhap so gio overtime: ";
    cin >> ot;
}

void laptrinhvien::Xuat()
{
    nhanvien::Xuat();
    cout << "So gio overtime: ";
    cout << ot << endl;
}

long long laptrinhvien::Luong()
{
    return lcb + ot * 200000;
}

int laptrinhvien::Loai()
{
    return 1;
}