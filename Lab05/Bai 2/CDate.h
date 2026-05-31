#include <iostream>
using namespace std;

class CDate
{
private:
    int d, m, y;

public:
    CDate(int nd = 1, int nm = 1, int ny = 1);
    bool compare();
    friend istream &operator>>(istream &is, CDate &ts);
    friend ostream &operator<<(ostream &os, CDate &ts);
    CDate &operator=(const CDate &other);
};