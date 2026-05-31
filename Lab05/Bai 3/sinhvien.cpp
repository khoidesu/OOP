#include "sinhvien.h"
using namespace std;

void sinhvien::Nhap()
{
    cout << "Nhap ma so sinh vien: ";
    cin >> mssv;
    cout << "Nhap ho va ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout << "Nhap dia chi: ";
    getline(cin, diachi);
    cout << "Nhap so tin chi: ";
    cin >> tinchi;
    cout << "Nhap diem trung binh: ";
    cin >> dtb;
}

void sinhvien::Xuat()
{
    cout << "Ma so sinh vien: ";
    cout << mssv << endl;
    cout << "Ho va ten: ";
    cout << hoten << endl;
    cout << "Dia chi: ";
    cout << diachi << endl;
    cout << "So tin chi: ";
    cout << tinchi << endl;
    cout << "Diem trung binh: ";
    cout << dtb << endl;
}

double sinhvien::getDiem()
{
    return dtb;
}
