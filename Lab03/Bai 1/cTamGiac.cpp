#ifndef CTAMGIAC_CPP
#define CTAMGIAC_CPP

#include <iostream>
#include "cTamGiac.h"
#include "cDiem.h"
using namespace std;

cTamGiac::cTamGiac()
{
    A = cDiem();
    B = cDiem();
    C = cDiem();
}

cTamGiac::cTamGiac(cDiem nA, cDiem nB, cDiem nC)
{
    A = nA;
    B = nB;
    C = nC;
}

cTamGiac::cTamGiac(const cTamGiac &other)
{
    A = other.A;
    B = other.B;
    C = other.C;
}

void cTamGiac::Nhap()
{
    cout << "Nhap toa do dinh A: " << endl;
    A.Nhap();
    cout << "Nhap toa do dinh B: " << endl;
    B.Nhap();
    cout << "Nhap toa do dinh C: " << endl;
    C.Nhap();
}

void cTamGiac::Xuat()
{
    cout << "Toa do dinh A: \n";
    A.Xuat();
    cout << "Toa do dinh B: \n";
    B.Xuat();
    cout << "Toa do dinh C: \n";
    C.Xuat();
}

/*
Hàm tính khoảng cách giữa 2 điểm
input: 2 điểm A, B
output: khoảng cách giữa A và B
*/
double dist(cDiem A, cDiem B)
{
    return sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
}

/*
Hàm tính chu vi tam giác
input: 3 điểm A, B, C
output: chu vi tam giác ABC bằng công thức = AB + BC + CA
*/
double cTamGiac::ChuVi()
{
    return dist(A, B) + dist(B, C) + dist(C, A);
}

/*
Hàm tính diện tích tam giác
input: 3 điểm A, B, C
output: diện tích tam giác ABC bằng công thức = sqrt(s * (s - AB) * (s - BC) * (s - CA))
*/
double cTamGiac::DienTich()
{
    double s = ChuVi() / 2;
    return sqrt(s * (s - dist(A, B)) * (s - dist(B, C)) * (s - dist(C, A)));
}

/*
Hàm phân loại tam giác
input: 3 điểm A, B, C
output: loại tam giác ABC
với 1: tam giác đều
    2: tam giác cân
    3: tam giác vuông
    0: tam giác thường
*/
int cTamGiac::Loai()
{
    double AB = dist(A, B);
    double BC = dist(B, C);
    double CA = dist(C, A);
    // khong phai tam giac (-1)
    if (DienTich() == 0)
        return -1;
    if (AB + BC <= CA || AB + CA <= BC || BC + CA <= AB)
        return -1;

    // tam giac deu (1)
    if (AB == BC && BC == CA)
        return 1;
    // tam giac can (2)
    if (AB == BC || BC == CA || CA == AB)
        return 2;
    // tam giac vuong (3)
    if (AB * AB + BC * BC == CA * CA || AB * AB + CA * CA == BC * BC || BC * BC + CA * CA == AB * AB)
        return 3;
    // tam giac thuong (0)
    return 0;
}

/*
Hàm dịch chuyển tam giác
input: Điểm vec
output: tam giác ABC sau khi dịch chuyển
*/
void cTamGiac::TinhTien(cDiem vec)
{
    A.setX(A.getX() + vec.getX());
    A.setY(A.getY() + vec.getY());
    B.setX(B.getX() + vec.getX());
    B.setY(B.getY() + vec.getY());
    C.setX(C.getX() + vec.getX());
    C.setY(C.getY() + vec.getY());
}

/*
Hàm quay tam giác
input: góc quay
output: tam giác ABC sau khi quay
*/
void cTamGiac::Quay(double goc)
{
    A.setX(A.getX() * cos(goc) - A.getY() * sin(goc));
    A.setY(A.getX() * sin(goc) + A.getY() * cos(goc));
    B.setX(B.getX() * cos(goc) - B.getY() * sin(goc));
    B.setY(B.getX() * sin(goc) + B.getY() * cos(goc));
    C.setX(C.getX() * cos(goc) - C.getY() * sin(goc));
    C.setY(C.getX() * sin(goc) + C.getY() * cos(goc));
}

/*
Hàm phóng to tam giác
input: hệ số phóng to
output: tam giác ABC sau khi phóng to
*/
void cTamGiac::PhongTo(double heso)
{
    A.setX(A.getX() * heso);
    A.setY(A.getY() * heso);
    B.setX(B.getX() * heso);
    B.setY(B.getY() * heso);
    C.setX(C.getX() * heso);
    C.setY(C.getY() * heso);
}

/*
Hàm thu nhỏ tam giác
input: hệ số thu nhỏ
output: tam giác ABC sau khi thu nhỏ
*/
void cTamGiac::ThuNho(double heso)
{
    A.setX(A.getX() / heso);
    A.setY(A.getY() / heso);
    B.setX(B.getX() / heso);
    B.setY(B.getY() / heso);
    C.setX(C.getX() / heso);
    C.setY(C.getY() / heso);
}

#endif