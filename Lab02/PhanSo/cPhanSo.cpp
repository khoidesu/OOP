#include <iostream>
#include "cPhanSo.h"
using namespace std;
int gcd(int a, int b) // hàm tìm ước chung lớn nhất
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void cPhanSo::Nhap()
{
    cout << "Nhap tu: ";
    cin >> iTu;
    do
    {
        cout << "Nhap mau: ";
        cin >> iMau;
    } while (iMau == 0);
}
void cPhanSo::Xuat()
{
    cout << iTu << "/" << iMau;
}

void cPhanSo::RutGon() // hàm rút gọn phân số
{
    int ucln = gcd(iTu, iMau); // tìm ước chung lớn nhất
    iTu /= ucln;               // rút tử
    iMau /= ucln;              // rút mẫu

    // Đảm bảo mẫu luôn dương
    if (iMau < 0)
    {
        iTu = -iTu;
        iMau = -iMau;
    }
}

cPhanSo cPhanSo::Tong(cPhanSo b) // hàm tính tổng
{
    cPhanSo res;
    res.iMau = iMau * b.iMau;                // tính mẫu
    res.iTu = (iTu * b.iMau + iMau * b.iTu); // quy đồng tử
    res.RutGon();                            // rút gọn phân số
    return res;
}

cPhanSo cPhanSo::Hieu(cPhanSo b)
{
    cPhanSo res;
    res.iMau = iMau * b.iMau;                // tính mẫu
    res.iTu = (iTu * b.iMau - iMau * b.iTu); // quy đồng tử
    res.RutGon();                            // rút gọn phân số
    return res;
}

cPhanSo cPhanSo::Tich(cPhanSo b)
{
    cPhanSo res;
    res.iMau = iMau * b.iMau; // tính mẫu
    res.iTu = iTu * b.iTu;    // tính tử
    res.RutGon();             // rút gọn phân số
    return res;
}

cPhanSo cPhanSo::Thuong(cPhanSo b)
{
    cPhanSo res;
    res.iMau = iMau * b.iTu; // tính mẫu
    res.iTu = iTu * b.iMau;  // tính tử
    res.RutGon();            // rút gọn phân số
    return res;
}

int cPhanSo::SoSanh(cPhanSo b)
{
    // Quy đồng phân số
    int ia = iTu * b.iMau;
    int ib = iMau * b.iTu;
    // So sánh
    if (ia > ib)
        return 1; // A > B
    else if (ia < ib)
        return -1; // A < B
    return 0;      // A = B
}
