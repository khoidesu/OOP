#include <iostream>
using namespace std;
class csophuc
{
private:
    double thuc;
    double ao;

public:
    csophuc(double t = 0, double a = 0);
    csophuc operator+(csophuc &other);
    csophuc operator-(csophuc &other);
    csophuc operator*(csophuc &other);
    csophuc operator/(csophuc &other);
    bool operator==(csophuc &other);
    bool operator!=(csophuc &other);
    friend istream &operator>>(istream &is, csophuc &ts);
    friend ostream &operator<<(ostream &os, csophuc &ts);
};