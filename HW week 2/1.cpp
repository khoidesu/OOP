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
PS rutgon(PS a)
{

    PS res;
    res.tu = a.tu / gcd(a.tu, a.mau);
    res.mau = a.mau / gcd(a.tu, a.mau);
    if (res.mau < 0)
    {
        res.tu = -1 * res.tu;
        res.mau = abs(res.mau);
    }
    return res;
}
PS tong(PS a, PS b)
{
    PS ans;
    ans.mau = a.mau * b.mau;
    ans.tu = a.tu * b.mau + b.tu * a.mau;
    return rutgon(ans);
}
PS hieu(PS a, PS b)
{
    PS ans;
    ans.mau = a.mau * b.mau;
    ans.tu = a.tu * b.mau - b.tu * a.mau;
    return rutgon(ans);
}
PS tich(PS a, PS b)
{
    PS ans;
    ans.mau = a.mau * b.mau;
    ans.tu = a.tu * b.tu;
    return rutgon(ans);
}
PS thuong(PS a, PS b)
{
    PS ans;
    ans.mau = a.mau * b.tu;
    ans.tu = a.tu * b.mau;
    return rutgon(ans);
}
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

    PS Tong = tong(a, b);
    PS Hieu = hieu(a, b);
    PS Tich = tich(a, b);
    PS Thuong = thuong(a, b);
    cout << "Tong: " << Tong.tu << "/" << Tong.mau << endl;
    cout << "Hieu: " << Hieu.tu << "/" << Hieu.mau << endl;
    cout << "Tich: " << Tich.tu << "/" << Tich.mau << endl;
    cout << "Thuong: " << Thuong.tu << "/" << Thuong.mau << endl;
    return 0;
}