#include <bits/stdc++.h>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int iX, int iY)
    {
        x = iX;
        y = iY;
    }
    double Distance(Point b)
    {
        return sqrt((this->x - b.x) * (this->x - b.x) + (this->y - b.y) * (this->y - b.y));
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
    int x1, y1;
    int x2, y2;
    cout << "nhap toa do (x y) cua diem thu 1: ";
    cin >> x1 >> y1;
    Point a(x1, y1);
    cout << "nhap toa do (x y) cua diem thu 2: ";
    cin >> x2 >> y2;
    Point b(x2, y2);

    cout << "Khoang cach giua (" << x1 << ", " << y1 << ") va (" << x2 << ", " << y2 << ") la: " << a.Distance(b);
    return 0;
}