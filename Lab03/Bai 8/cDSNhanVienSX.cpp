#include <bits/stdc++.h>
#include "cDSNhanVienSX.h"
#include "cDate.h"
using namespace std;

cDSNhanVienSX::cDSNhanVienSX()
{
    n = 0;
    ds = nullptr;
}

cDSNhanVienSX::cDSNhanVienSX(int _n, cNhanVienSX *_ds)
{
    n = _n;
    if (n > 0)
    {
        ds = new cNhanVienSX[n];
        for (int i = 0; i < n; i++)
        {
            ds[i] = _ds[i];
        }
    }
    else
    {
        ds = nullptr;
    }
}

cDSNhanVienSX::cDSNhanVienSX(const cDSNhanVienSX &ds)
{
    n = ds.n;
    if (n > 0)
    {
        this->ds = new cNhanVienSX[n];
        for (int i = 0; i < n; i++)
        {
            this->ds[i] = ds.ds[i];
        }
    }
    else
    {
        this->ds = nullptr;
    }
}

cDSNhanVienSX::~cDSNhanVienSX()
{
    delete[] ds;
}

void cDSNhanVienSX::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    ds = new cNhanVienSX[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << ":" << endl;
        ds[i].Nhap();
    }
}

void cDSNhanVienSX::Xuat()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin nhan vien thu " << i + 1 << ":" << endl;
        ds[i].Xuat();
    }
}

/*
Hàm tìm nhân viên có lương thấp nhất
input: không có
output: nhân viên có lương thấp nhất
*/
cNhanVienSX cDSNhanVienSX::LuongThapNhat()
{
    cNhanVienSX Min = ds[0];
    for (int i = 1; i < n; i++)
    {
        if (ds[i].TinhLuong() < Min.TinhLuong())
        {
            Min = ds[i];
        }
    }
    return Min;
}

/*
Hàm tính tổng lương
input: không có
output: tổng lương của tất cả nhân viên
*/
int cDSNhanVienSX::TongLuong()
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += ds[i].TinhLuong();
    }
    return tong;
}

/*
Hàm so sánh tuổi
input: hai nhân viên a, b
output: nhân viên có tuổi nhỏ hơn
*/
cNhanVienSX SSTuoi(cNhanVienSX a, cNhanVienSX b)
{
    cDate dateA = a.getNgaySinh();
    cDate dateB = b.getNgaySinh();
    if (dateA.getNam() != dateB.getNam())
        return (dateA.getNam() < dateB.getNam()) ? a : b;
    if (dateA.getThang() != dateB.getThang())
        return (dateA.getThang() < dateB.getThang()) ? a : b;
    return (dateA.getNgay() < dateB.getNgay()) ? a : b;
}

/*
Hàm tìm nhân viên có tuổi cao nhất
input: không có
output: nhân viên có tuổi cao nhất
*/
cNhanVienSX cDSNhanVienSX::TuoiCaoNhat()
{
    cNhanVienSX tuoiCaoNhat = ds[0];
    for (int i = 1; i < n; i++)
    {
        tuoiCaoNhat = SSTuoi(tuoiCaoNhat, ds[i]);
    }
    return tuoiCaoNhat;
}

/*
Hàm sắp xếp nhân viên theo lương
input: không có
output: mảng nhân viên được sắp xếp theo lương
*/
void cDSNhanVienSX::SortLuong()
{
    sort(ds, ds + n, [](cNhanVienSX a, cNhanVienSX b)
         { return a.TinhLuong() < b.TinhLuong(); });
}
