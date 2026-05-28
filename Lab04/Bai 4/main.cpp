#include <bits/stdc++.h>
#include "CDate.cpp"
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    CDate a(10, 10, 2010);
    int x = 5000;
    long long P = 300000000;
    double r = 15;
    CDate b(18, 6, 2024);
    // cin >> a;
    // cout << "Nhap so ngay: ";
    // cin >> x;

    CDate cong = a + x;
    CDate tru = a - x;
    cout << "Ngay + " << x << ": " << cong;
    cout << "Ngay - " << x << ": " << tru;
    cout << endl;

    CDate aplusplus = a++;
    cout << aplusplus << endl;
    CDate plusplusa = ++a;
    cout << plusplusa << endl;

    // cout << "Nhap so tien goc: ";
    // cin >> P;
    // cout << "Nhap lai xuat (%): ";
    // cin >> r;
    // cin >> b;

    int t = (int)(b - a);

    long long A = P * (1 + (double)r / 100 * (double)(t * 1.00 / 365));
    cout << A << endl;
    return 0;
}