#include "canho.h"
using namespace std;

void canho::Nhap()
{
    giaodich::Nhap();
    cout << "Nhap ma can ho, chung cu: ";
    cin >> macan;
    cout << "Nhap vi tri tang: ";
    cin >> vttang;
}

void canho::Xuat()
{
    giaodich::Xuat();
    cout << "Ma can ho, chung cu: ";
    cout << macan << endl;
    cout << "Vi tri tang: ";
    cout << vttang << endl;
}

double canho::ThanhTien()
{
    if (vttang == 2)
        return dientich * dongia * 2;
    else if (vttang > 1 && vttang < 15)
        return dientich * dongia;
    else if (vttang > 15)
        return dientich * dongia * 1.2;
}

int canho::Loai()
{
    return 3;
}