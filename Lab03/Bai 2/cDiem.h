#ifndef CDIEM_H
#define CDIEM_H

class cDiem
{
private:
    double dx, dy;

public:
    cDiem();
    cDiem(double x, double y);
    cDiem(const cDiem &other);
    void Nhap();
    void Xuat();

    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
};

#endif