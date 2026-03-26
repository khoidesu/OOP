#include <bits/stdc++.h>
using namespace std;
struct PS
{
    int tu, mau;
};
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    PS a, b;
    cout << "Nhap phan so 1: ";
    cin >> a.tu >> a.mau;
    cout << "Nhap phan so 2: ";
    cin >> b.tu >> b.mau;

    double A = a.tu * 1.00 / a.mau;
    double B = b.tu * 1.00 / b.mau;
    cout << "Phan so lon nhat: ";
    if (A > B)
        cout << a.tu << "/" << a.mau;
    else
        cout << b.tu << "/" << b.mau;
    return 0;
}