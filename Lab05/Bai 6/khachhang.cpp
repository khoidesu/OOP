#include "khachhang.h"
using namespace std;

void khachhang::Nhap() {
    cin.ignore();
    getline(cin, ten);
    cin >> slg >> dongia;
}

void khachhang::Xuat() {
    cout << ten << endl;
}