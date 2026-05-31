#include <bits/stdc++.h>
#include "dsnv.h"
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
    dsnv a;
    a.Nhap();
    a.Xuat();
    cout << endl;
    a.TongLuong();
    cout << endl;
    a.MinLuong();
    cout << endl;
    a.LonTuoiNhat();
    return 0;
}