#include <iostream>
#include "cNhanVienSX.h"
#include "cDate.h"
using namespace std;

cNhanVienSX::cNhanVienSX()
{
    MaNhanVien = "";
    HoTen = "";
    SoSanPham = 0;
    DonGia = 0;
}
cNhanVienSX::cNhanVienSX(string ma, string hoTen, cDate ngaySinh, int soSanPham, int donGia)
{
    MaNhanVien = ma;
    HoTen = hoTen;
    NgaySinh = ngaySinh;
    SoSanPham = soSanPham;
    DonGia = donGia;
}
cNhanVienSX::cNhanVienSX(const cNhanVienSX &nv)
{
    MaNhanVien = nv.MaNhanVien;
    HoTen = nv.HoTen;
    NgaySinh = nv.NgaySinh;
    SoSanPham = nv.SoSanPham;
    DonGia = nv.DonGia;
}

string cNhanVienSX::getMaNhanVien()
{
    return MaNhanVien;
}

string cNhanVienSX::getHoTen()
{
    return HoTen;
}

cDate cNhanVienSX::getNgaySinh()
{
    return NgaySinh;
}

int cNhanVienSX::getSoSanPham()
{
    return SoSanPham;
}

int cNhanVienSX::getDonGia()
{
    return DonGia;
}

void cNhanVienSX::setMaNhanVien(string ma)
{
    MaNhanVien = ma;
}

void cNhanVienSX::setHoTen(string hoTen)
{
    HoTen = hoTen;
}

void cNhanVienSX::setNgaySinh(cDate ngaySinh)
{
    NgaySinh = ngaySinh;
}

void cNhanVienSX::setSoSanPham(int soSanPham)
{
    SoSanPham = soSanPham;
}

void cNhanVienSX::setDonGia(int donGia)
{
    DonGia = donGia;
}

void cNhanVienSX::Nhap()
{
    cout << "Nhap ma nhan vien: ";
    cin >> MaNhanVien;
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, HoTen);
    cout << "Nhap ngay sinh: \n";
    NgaySinh.Nhap();
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
    cout << "Nhap don gia: ";
    cin >> DonGia;
}

void cNhanVienSX::Xuat()
{
    cout << "Ma nhan vien: " << MaNhanVien << endl;
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: ";
    NgaySinh.Xuat();
    cout << endl;
    cout << "So san pham: " << SoSanPham << endl;
    cout << "Don gia: " << DonGia << endl;
}

/*
Hàm tính lương
input: không có
output: lương của nhân viên bằng công thức = SoSanPham * DonGia
*/
int cNhanVienSX::TinhLuong()
{
    return SoSanPham * DonGia;
}
