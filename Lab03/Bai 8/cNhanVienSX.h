#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H
#include <string>
using namespace std;
#include "cDate.h"
class cNhanVienSX
{
private:
    string MaNhanVien;
    string HoTen;
    cDate NgaySinh;
    int SoSanPham;
    int DonGia;

public:
    cNhanVienSX();
    cNhanVienSX(string ma, string hoTen, cDate ngaySinh, int soSanPham, int donGia);
    cNhanVienSX(const cNhanVienSX &nv);

    string getMaNhanVien();
    string getHoTen();
    cDate getNgaySinh();
    int getSoSanPham();
    int getDonGia();

    void setMaNhanVien(string ma);
    void setHoTen(string hoTen);
    void setNgaySinh(cDate ngaySinh);
    void setSoSanPham(int soSanPham);
    void setDonGia(int donGia);

    void Nhap();
    void Xuat();

    int TinhLuong();
};
#endif
