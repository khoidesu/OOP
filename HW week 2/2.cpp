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

PS cmpMax(PS a, PS b)
{
    double _a = a.tu * 1.00 / a.mau;
    double _b = b.tu * 1.00 / b.mau;
    if (_a > _b)
        return a;
    return b;
}

int n;
PS arr[1000001];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    cout << "Nhap so luong phan so: ";
    cin >> n;
    cout << "Nhap phan so co dang a b: \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i].tu >> arr[i].mau;
    PS sum, Max_PS = arr[0];
    sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum = tong(sum, arr[i]);
        Max_PS = cmpMax(Max_PS, arr[i]);
    }
    sum = rutgon(sum);
    cout << "Tong day phan so: " << sum.tu << "/" << sum.mau << endl;
    cout << "Phan so lon nhat: " << Max_PS.tu << "/" << Max_PS.mau;
    return 0;
}