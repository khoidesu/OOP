#include "vanphong.h"
using namespace std;

void vanphong::Nhap()
{
    nhanvien::Nhap();
    cout << "Nhap luong co ban: ";
    cin >> lcb;
    cout << "Nhap so san pham: ";
    cin >> prod;
}

void vanphong::Xuat()
{
    nhanvien::Xuat();
    cout << "Luong co ban: ";
    cout << lcb << endl;
    cout << "So san pham: ";
    cout << prod << endl;
}

int vanphong::Luong()
{
    return lcb + prod * 5000;
}

int vanphong::Loai()
{
    return 1;
}