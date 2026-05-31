#include "daihoc.h"

void daihoc::Nhap()
{
    sinhvien::Nhap();
    cout << "Nhap ten luan an: ";
    cin >> tenlv;
    cout << "Nhap diem luan an: ";
    cin >> dlv;
}

void daihoc::Xuat()
{
    sinhvien::Xuat();
    cout << "Ten luan an: ";
    cout << tenlv << endl;
    cout << "Diem luan an: ";
    cout << dlv << endl;
}

bool daihoc::isTN()
{
    if (tinchi >= 170 && dtb >= 5 && dlv >= 5)
        return true;
    return false;
}

int daihoc::Loai()
{
    return 2;
}