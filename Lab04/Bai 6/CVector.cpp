#include "CVector.h"
#include <bits/stdc++.h>
using namespace std;

CVector::CVector()
{
    n = 0;
    a = new double[n];
}

CVector::CVector(int nn, const double *other)
{
    n = nn;
    a = new double[n];
    for (int i = 0; i < n; i++)
        a[i] = other[i];
}

CVector::CVector(int nn)
{
    n = nn;
    a = new double[n];

    for (int i = 0; i < n; i++)
        a[i] = 0;
}

CVector::CVector(const CVector &other)
{
    n = other.n;
    a = new double[n];
    for (int i = 0; i < n; i++)
        a[i] = other.a[i];
}

CVector::~CVector()
{
    delete[] a;
}

CVector CVector::operator+(const CVector &other)
{
    CVector res(n);
    for (int i = 0; i < n; i++)
    {
        res.a[i] = a[i] + other.a[i];
    }
    return res;
}

CVector CVector::operator-(const CVector &other)
{
    CVector res(n);
    for (int i = 0; i < n; i++)
    {
        res.a[i] = a[i] - other.a[i];
    }
    return res;
}

CVector CVector::operator*(const int k)
{
    CVector res(n);
    for (int i = 0; i < n; i++)
    {
        res.a[i] = a[i] * k;
    }
    return res;
}

istream &operator>>(istream &is, CVector &vt)
{
    cout << "Nhap so chieu: ";
    is >> vt.n;
    delete[] vt.a;
    vt.a = new double[vt.n];
    cout << "Nhap " << vt.n << " gia tri: ";
    for (int i = 0; i < vt.n; i++)
        is >> vt.a[i];
    return is;
}

ostream &operator<<(ostream &os, CVector &vt)
{
    os << "So chieu: " << vt.n << endl;
    os << "Vector: ";
    for (int i = 0; i < vt.n; i++)
        os << vt.a[i] << " ";
    os << endl;
    return os;
}

CVector &CVector::operator=(const CVector &other)
{
    if (this == &other)
        return *this;

    delete[] a;

    n = other.n;

    a = new double[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = other.a[i];
    }

    return *this;
}

bool CVector::operator==(const CVector &other)
{
    if (n != other.n)
        return false;
    for (int i = 0; i < n; i++)
        if (a[i] != other.a[i])
            return false;
    return true;
}

bool CVector::operator!=(const CVector &other)
{
    if (*this == other)
        return false;
    return true;
}

int CVector::getChieu()
{
    return n;
}

double CVector::getPhantu(int idx)
{
    if (idx < 0 || idx >= n)
        return 0;
    return a[idx];
}

void CVector::setPhantu(int idx, double val)
{
    a[idx] = val;
}

double CVector::prod(const CVector &other)
{
    double res = 0;
    if (n != other.n)
        return 0;
    for (int i = 0; i < n; i++)
        res += a[i] * other.a[i];
    return res;
}

double CVector::length()
{
    double res = 0;
    for (int i = 0; i < n; i++)
        res += a[i] * a[i];
    return sqrt(res);
}