#include <iostream>
#include "cDiem.h"
using namespace std;

cDiem::cDiem()
{
    dx = 0;
    dy = 0;
}

cDiem::cDiem(double x, double y)
{
    dx = x;
    dy = y;
}

cDiem::cDiem(const cDiem &other)
{
    dx = other.dx;
    dy = other.dy;
}

void cDiem::Nhap()
{
    cout << "Nhap toa do x: ";
    cin >> dx;
    cout << "Nhap toa do y: ";
    cin >> dy;
}

void cDiem::Xuat()
{
    cout << "Toa do x: " << dx << endl;
    cout << "Toa do y: " << dy << endl;
}

double cDiem::getX()
{
    return dx;
}

double cDiem::getY()
{
    return dy;
}

void cDiem::setX(double x)
{
    dx = x;
}

void cDiem::setY(double y)
{
    dy = y;
}
