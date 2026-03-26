#include <bits/stdc++.h>
using namespace std;
struct PS
{
    int tu, mau;
};
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    PS a;
    cout << "Nhap phan so co dang: a b: ";
    cin >> a.tu >> a.mau;
    int uocchung = gcd(a.tu, a.mau);
    cout << endl;
    cout << "Phan so da rut gon: ";
    if (a.mau == 0)
        cout << "INF";
    else if (a.tu == 0)
        cout << 0;
    else if (a.mau / uocchung == 1)
        cout << a.tu / uocchung;
    else
        cout << a.tu / uocchung << "/" << a.mau / uocchung;
    return 0;
}