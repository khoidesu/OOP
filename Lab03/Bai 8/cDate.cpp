#include <iostream>
#include "cDate.h"
using namespace std;

cDate::cDate()
{
    iNgay = 1;
    iThang = 1;
    iNam = 2000;
}

cDate::cDate(int ngay, int thang, int nam)
{
    iNgay = ngay;
    iThang = thang;
    iNam = nam;
}

cDate::cDate(const cDate &other)
{
    iNgay = other.iNgay;
    iThang = other.iThang;
    iNam = other.iNam;
}

void cDate::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

void cDate::Xuat()
{
    cout << "Ngay " << iNgay << " Thang " << iThang << " Nam " << iNam;
}

int cDate::getNgay()
{
    return iNgay;
}

int cDate::getThang()
{
    return iThang;
}

int cDate::getNam()
{
    return iNam;
}
