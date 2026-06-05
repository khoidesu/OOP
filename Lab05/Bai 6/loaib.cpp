#include "loaib.h"
using namespace std;

void loaib::Nhap() {
    khachhang::Nhap();
    cin >> sonam;
}

void loaib::Xuat() {
    khachhang::Xuat();
    cout << sotien() << endl;
}

long long loaib::sotien() {
    double khuyenmai = max(sonam * 0.05, 0.5);
    // cout << khuyenmai << endl;
    return (slg * dongia) * (1 - khuyenmai) + ((slg * dongia) * (1 - khuyenmai)) * 0.1;
}