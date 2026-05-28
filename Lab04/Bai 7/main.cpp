#include <bits/stdc++.h>
#include "CMatrix.cpp"
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
    CMatrix a, b;
    cin >> a >> b;

    cout << "Ma tran a: \n";
    cout << a;
    cout << "Ma tran b: \n";
    cout << b;

    // CMatrix tong = a + b;
    // cout << "tong: " << tong << endl;
    // CMatrix hieu = a - b;
    // cout << "hieu: " << hieu << endl;

    int n;
    vector<int> ve;
    cout << "Nhap n: ";
    cin >> n;
    ve.resize(n);
    for (int i = 0; i < n; i++)
        cin >> ve[i];

    CMatrix tich = a * b;
    cout << "tich: \n"
         << tich << endl;

    CMatrix tichvt = a * ve;
    cout << "tich vector: \n"
         << tichvt << endl;

    return 0;
}