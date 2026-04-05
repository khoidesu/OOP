#include <iostream>
#include "cTime.cpp"
using namespace std;

int main()
{
    cTime time1;
    time1.Nhap();
    cout << "Thoi gian ban dau: ";
    time1.Xuat();
    cout << endl;
    cout << endl;
    cout << "Thoi gian sau khi cong them 1 giay: ";
    time1 = time1.TinhCongThemMotGiay();
    time1.Xuat();
    return 0;
}
