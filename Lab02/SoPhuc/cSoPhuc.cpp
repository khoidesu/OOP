#include <iostream>
#include "cSoPhuc.h"
using namespace std;
void cSoPhuc::Nhap()
{
    cout << "Nhap thuc: ";
    cin >> iThuc;
    cout << "Nhap ao: ";
    cin >> iAo;
}

void cSoPhuc::Xuat()
{
    cout << "Thuc: " << iThuc << endl;
    cout << "Ao: " << iAo << endl;
}

cSoPhuc cSoPhuc::Tong(cSoPhuc b) // Tính tổng
{
    cSoPhuc res;
    res.iThuc = iThuc + b.iThuc;
    res.iAo = iAo + b.iAo;
    return res;
}

cSoPhuc cSoPhuc::Hieu(cSoPhuc b) // Tính hiệu
{
    cSoPhuc res;
    res.iThuc = iThuc - b.iThuc;
    res.iAo = iAo - b.iAo;
    return res;
}

cSoPhuc cSoPhuc::Tich(cSoPhuc b) // Tính tích
{
    cSoPhuc res;
    res.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    res.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return res;
}

cSoPhuc cSoPhuc::Thuong(cSoPhuc b) // Tính thương
{
    cSoPhuc res;
    res.iThuc = iThuc * b.iThuc + iAo * b.iAo;
    res.iAo = iAo * b.iThuc - iThuc * b.iAo;
    return res;
}
