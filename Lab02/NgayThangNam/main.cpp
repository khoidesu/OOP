#include <bits/stdc++.h>
#include "cDate.cpp"
using namespace std;
signed main()
{
    cDate a;
    a.Nhap();

    a.Xuat();
    cout << endl;

    cout << "Ngay tiep theo: ";
    cDate next = a.NgayThangNamTiepTheo();

    next.Xuat();
    return 0;
}