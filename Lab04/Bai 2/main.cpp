#include <bits/stdc++.h>
#include "cphanso.cpp"
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    cphanso a(4, 4), b(4, 4);
    // cin >> a;
    // cin >> b;

    cout << a << endl;
    cout << b << endl;

    if (a < b)
        cout << "a < b";
    else if (a > b)
        cout << "a > b";
    else if (a == b)
        cout << "a = b";
    cout << endl;

    cphanso tong = a + b;
    cphanso hieu = a - b;
    cphanso tich = a * b;
    cphanso thuong = a / b;

    cout << "Tong: "
         << tong << endl;
    cout << "Hieu: "
         << hieu << endl;
    cout << "Tich: "
         << tich << endl;
    cout << "Thuong: "
         << thuong << endl;
    return 0;
}