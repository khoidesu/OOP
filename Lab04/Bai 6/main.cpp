#include <bits/stdc++.h>
#include "CVector.cpp"
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
#define name "TASK"
    if (fopen(name ".inp", "r"))
    {
        freopen(name ".inp", "r", stdin);
        freopen(name ".out", "w", stdout);
    }
    CVector a, b;
    cin >> a;
    cin >> b;

    cout << a;
    cout << endl;
    cout << b;
    cout << endl;

    CVector tong = a + b;
    cout << "tong: \n"
         << tong << endl;
    CVector tru = a - b;
    cout << "hieu: \n"
         << tru << endl;

    int x;
    cout << "Nhap so x: ";
    cin >> x;

    CVector nhan = a * x;
    cout << "tich voi 1 so: \n"
         << nhan << endl;

    cout << "length: " << a.length() << endl;

    return 0;
}