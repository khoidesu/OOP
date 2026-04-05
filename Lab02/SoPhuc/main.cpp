#include <iostream>
#include "cSoPhuc.cpp"
using namespace std;
int main()
{
    // nhập số phức
    cSoPhuc a, b;
    cout << "Nhap so phuc A:\n";
    a.Nhap();
    cout << endl;
    cout << "Nhap so phuc B:\n";
    b.Nhap();
    cout << endl;

    // xuất số phức
    cout << "So phuc A: ";
    a.Xuat();
    cout << endl;
    cout << "So phuc B: ";
    b.Xuat();
    cout << endl;
    cout << endl;

    // tính toán
    cSoPhuc tong = a.Tong(b);
    cSoPhuc hieu = a.Hieu(b);
    cSoPhuc tich = a.Tich(b);
    cSoPhuc thuong = a.Thuong(b);

    cout << "Tong cua 2 so phuc A va B la: \n";
    tong.Xuat();
    cout << "\nHieu cua 2 so phuc A va B la: \n";
    hieu.Xuat();
    cout << "\nTich cua 2 so phuc A va B la: \n";
    tich.Xuat();
    cout << "\nThuong cua 2 so phuc A va B la: \n";
    thuong.Xuat();
    cout << endl;

    return 0;
}