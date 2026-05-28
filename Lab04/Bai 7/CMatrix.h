#ifndef CMATRIX_H
#define CMATRIX_H
#include <vector>
using namespace std;
class CMatrix
{
private:
    int n, m;
    vector<vector<int>> a;

public:
    // constructor
    CMatrix();
    CMatrix(int nn, int mm, const vector<vector<int>> other);
    CMatrix(int nn, int mm);
    CMatrix(const CMatrix &other);

    // destructor
    ~CMatrix();

    // cin, cout
    friend istream &operator>>(istream &is, CMatrix &mt);
    friend ostream &operator<<(ostream &os, CMatrix &mt);

    // + - *
    CMatrix operator+(const CMatrix &other);
    CMatrix operator-(const CMatrix &other);
    CMatrix operator*(const CMatrix &other);
    CMatrix operator*(const int k);

    // *
    CMatrix operator*(const vector<int> other);

    // =
    CMatrix &operator=(const CMatrix &other);
};

#endif