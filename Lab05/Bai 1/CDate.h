#include <iostream>
using namespace std;

class CDate
{
private:
    int d, m, y;

public:
    CDate(int nd = 1, int nm = 1, int ny = 1);
    int compare(CDate other);
    // -1: be hon   0: bang     1: lon hon
    friend istream &operator>>(istream &is, CDate &ts);
    friend ostream &operator<<(ostream &os, CDate &ts);
    CDate &operator=(const CDate &other);
};