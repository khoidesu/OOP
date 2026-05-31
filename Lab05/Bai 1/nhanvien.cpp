#include "nhanvien.h"
using namespace std;
void nhanvien::Nhap()
{
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    cout << "Nhap ngay sinh: \n";
    cin >> dob;
}
void nhanvien::Xuat()
{
    cout << "Ten: ";
    cout << name << endl;
    cout << "Ngay sinh: ";
    cout << dob;
}

void nhanvien::setLuong(int val)
{
    salary = val;
}
CDate nhanvien::DOB()
{
    return dob;
}