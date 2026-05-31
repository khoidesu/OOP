#include "giaodich.h"
using namespace std;

void giaodich::Nhap()
{
    cout << "Nhap ma giao dich: ";
    cin >> maso;
    cout << "Nhap ngay giao dich: ";
    cin >> ngay;
    cout << "Nhap don gia: ";
    cin >> dongia;
    cout << "Nhap dien tich: ";
    cin >> dientich;
}

void giaodich::Xuat()
{
    cout << "Ma giao dich: ";
    cout << maso << endl;
    cout << "Ngay giao dich: ";
    cout << ngay;
    cout << "Don gia: ";
    cout << dongia << endl;
    cout << "Dien tich: ";
    cout << dientich << endl;
}

CDate giaodich::getDate()
{
    return ngay;
}