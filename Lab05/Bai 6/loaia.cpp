#include "loaia.h"
using namespace std;

void loaia::Nhap() {
    khachhang::Nhap();
}

void loaia::Xuat() {
    khachhang::Xuat();
    cout << sotien() << endl;
}

long long loaia::sotien() {
    return slg * dongia + (slg * dongia) * 0.1;
}