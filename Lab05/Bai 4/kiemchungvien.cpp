#include "kiemchungvien.h"
using namespace std;

void kiemchungvien::Nhap()
{
    nhanvien::Nhap();
    cout << "Nhap so loi: ";
    cin >> loi;
}

void kiemchungvien::Xuat()
{
    nhanvien::Xuat();
    cout << "So loi: ";
    cout << loi << endl;
}

long long kiemchungvien::Luong()
{
    return lcb + loi * 50000;
}

int kiemchungvien::Loai()
{
    return 2;
}