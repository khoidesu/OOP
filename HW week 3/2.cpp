#include <bits/stdc++.h>
using namespace std;
class Circle
{
private:
    int x, y;
    double r;

public:
    Circle(int iX, int iY, double dR)
    {
        x = iX;
        y = iY;
        r = dR;
    }
    double Surface()
    {
        return (r * r) * 3.14;
    }
    double Circum()
    {
        return (r * 2) * 3.14;
    }
};
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
    int x, y;
    double r;
    cout << "nhap toa do (x y) cua duong tron: ";
    cin >> x >> y;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;
    Circle a(x, y, r);
    cout << a.Surface() << endl;
    cout << a.Circum() << endl;
    return 0;
}