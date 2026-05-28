#include "CMatrix.h"
#include <bits/stdc++.h>
using namespace std;

CMatrix::CMatrix()
{
    n = 0;
    m = 0;
    a.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = 0;
}

CMatrix::CMatrix(int nn, int mm, const vector<vector<int>> other)
{
    n = nn;
    m = mm;
    a.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = other[i][j];
}

CMatrix::CMatrix(int nn, int mm)
{
    n = nn;
    m = mm;
    a.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = 0;
}

CMatrix::CMatrix(const CMatrix &other)
{
    n = other.n;
    m = other.m;
    a.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = other.a[i][j];
}

CMatrix::~CMatrix()
{
    n = 0;
    m = 0;
    a.clear();
}

istream &operator>>(istream &is, CMatrix &mt)
{
    cout << "Nhap n: ";
    is >> mt.n;
    cout << "Nhap m: ";
    is >> mt.m;
    cout << "Nhap ma tran: \n";
    mt.a.resize(mt.n, vector<int>(mt.m));
    for (int i = 0; i < mt.n; i++)
        for (int j = 0; j < mt.m; j++)
            is >> mt.a[i][j];
    return is;
}

ostream &operator<<(ostream &os, CMatrix &mt)
{
    os << "n: " << mt.n << endl;
    os << "m: " << mt.m << endl;
    for (int i = 0; i < mt.n; i++)
    {
        cout << "|";
        for (int j = 0; j < mt.m; j++)
            os << mt.a[i][j] << " ";
        cout << "|";
        os << endl;
    }
    os << endl;
    return os;
}

CMatrix CMatrix::operator+(const CMatrix &other)
{
    CMatrix res(n, m);

    if (n != other.n)
        return res;
    if (m != other.m)
        return res;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j] = a[i][j] + other.a[i][j];
    return res;
}

CMatrix CMatrix::operator-(const CMatrix &other)
{
    CMatrix res(n, m);

    if (n != other.n)
        return res;
    if (m != other.m)
        return res;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j] = a[i][j] - other.a[i][j];
    return res;
}

CMatrix CMatrix::operator*(const int k)
{
    CMatrix res(n, m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            res.a[i][j] = a[i][j] * k;
    return res;
}

CMatrix CMatrix::operator*(const vector<int> other)
{
    CMatrix res(n, 1);
    if (m != other.size())
        return res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res.a[i][0] += a[i][j] * other[j];
        }
    }

    return res;
}

CMatrix CMatrix::operator*(const CMatrix &other)
{
    CMatrix res(n, other.m);
    if (m != other.n)
        return res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < other.m; j++)
        {
            for (int k = 0; k < m; k++)
                res.a[i][j] += a[i][k] * other.a[k][j];
        }
    }
    return res;
}

CMatrix &CMatrix::operator=(const CMatrix &other)
{
    if (this == &other)
        return *this;

    n = other.n;
    m = other.m;

    a.resize(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = other.a[i][j];
        }
    }

    return *this;
}