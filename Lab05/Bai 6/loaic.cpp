#include "loaic.h"
using namespace std;

void loaic::Nhap() {
    khachhang::Nhap();
}

void loaic::Xuat() {
    khachhang::Xuat();
    cout << sotien() << endl;
}

long long loaic::sotien() {
    return (slg * dongia) * 0.5 + ( (slg * dongia) * 0.5 ) * 0.1;
}