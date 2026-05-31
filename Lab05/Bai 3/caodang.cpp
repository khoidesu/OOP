#include "caodang.h"

void caodang::Nhap()
{
    sinhvien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> dtn;
}

void caodang::Xuat()
{
    sinhvien::Xuat();
    cout << "Diem thi tot nghiep: ";
    cout << dtn << endl;
}

bool caodang::isTN()
{
    if (tinchi >= 120 && dtb >= 5 && dtn >= 5)
        return true;
    return false;
}

int caodang::Loai()
{
    return 1;
}