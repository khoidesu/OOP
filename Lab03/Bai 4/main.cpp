#include <iostream>
#include "cArray.cpp"
using namespace std;

int main()
{
    cArray arr(100);
    arr.Nhap();
    arr.Xuat();
    // arr.TaoNgauNhien();
    // arr.Xuat();
    int x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "So luong x = : " << x << ": " << arr.SoLuongX(x) << endl;
    cout << "Mang co tang dan: " << (arr.isTang() ? "Yes" : "No") << endl;
    cout << "Min le: " << arr.minLe() << endl;
    cout << "Max nguyen to: " << arr.maxPrime() << endl;
    arr.SapXepTangDan(0, arr.getSize() - 1);
    arr.Xuat();
    arr.SapXepGiamDan();
    arr.Xuat();
    return 0;
}