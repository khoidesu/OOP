#include "sanxuat.h"
using namespace std;

void sanxuat::Nhap()
{
    nhanvien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> songay;
}

void sanxuat::Xuat()
{
    nhanvien::Xuat();
    cout << "So ngay lam viec: ";
    cout << songay << endl;
}

int sanxuat::Luong()
{
    return songay * 100000;
}

int sanxuat::Loai()
{
    return 2;
}