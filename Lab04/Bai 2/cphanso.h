#include <iostream>
using namespace std;

class cphanso
{
private:
    int tu;
    int mau;

public:
    cphanso(int t = 0, int mau = 1);
    cphanso operator+(cphanso &other);
    cphanso operator-(cphanso &other);
    cphanso operator*(cphanso &other);
    cphanso operator/(cphanso &other);
    bool operator==(cphanso &other);
    bool operator>(cphanso &other);
    bool operator<(cphanso &other);
    friend istream &operator>>(istream &is, cphanso &ts);
    friend ostream &operator<<(ostream &os, cphanso &ts);
};