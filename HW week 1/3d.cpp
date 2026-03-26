#include <bits/stdc++.h>
using namespace std;
struct Date
{
    int d, m, y;
};
int is31days(int x)
{
    if (x == 2)
        return 2;
    if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
        return 1;
    return 0;
}
bool isnhuan(int x)
{
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
}
int signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
#define name "TASK"
    cout << "Nhap ngay/thang/nam: ";
    Date a;
    cin >> a.d >> a.m >> a.y;

    if (a.d == 31 && a.m == 12)
    {
        cout << 1 << " " << 1 << " " << a.y + 1;
    }
    else if (is31days(a.m) == 2)
    {
        if (a.d == 29 && isnhuan(a.y))
        {
            cout << 1 << " " << a.m + 1 << " " << a.y;
        }
        else if (a.d == 28 && !isnhuan(a.y))
        {
            cout << 1 << " " << a.m + 1 << " " << a.y;
        }
        else
        {
            cout << a.d + 1 << " " << a.m << " " << a.y;
        }
    }
    else if (is31days(a.m) == 1)
    {
        if (a.d == 31)
        {
            cout << 1 << " " << a.m + 1 << " " << a.y;
        }
        else
        {
            cout << a.d + 1 << " " << a.m << " " << a.y;
        }
    }
    else
    {
        if (a.d == 30)
        {
            cout << 1 << " " << a.m + 1 << " " << a.y;
        }
        else
        {
            cout << a.d + 1 << " " << a.m << " " << a.y;
        }
    }

    return 0;
}