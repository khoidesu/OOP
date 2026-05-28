#ifndef CVECTOR_H
#define CVECTOR_H
#include <iostream>
using namespace std;

class CVector
{
private:
    int n;     // dimenson
    double *a; //  dimenson list
public:
    // constructor
    CVector();
    CVector(int nn, const double *other);
    CVector(int nn);
    CVector(const CVector &other);

    // destructor
    ~CVector();

    // cin, cout
    friend istream &operator>>(istream &is, CVector &vt);
    friend ostream &operator<<(ostream &os, CVector &vt);

    // + - *
    CVector operator+(const CVector &other);
    CVector operator-(const CVector &other);
    CVector operator*(const int k);

    // =
    CVector &operator=(const CVector &other);

    // ==, !=
    bool operator==(const CVector &other);
    bool operator!=(const CVector &other);

    // get, set
    int getChieu();
    double getPhantu(int idx);
    void setPhantu(int idx, double val);

    // tich vo huong
    double prod(const CVector &other);

    // do dai vector
    double length();
};

#endif