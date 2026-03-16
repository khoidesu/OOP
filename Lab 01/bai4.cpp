#include <iostream>
using namespace std;
/*
supported format:
    dd-mm-yyyy
    dd/mm/yyyy
    dd mm yyyy
    dd.mm.yyyy
*/
class Date
{
private:
    int d, m, y;
    bool isleap(int x) // check if year y is leap or not
    {
        return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
    }
    bool validDate(int d, int m, int y) // check is d,m < 0 or m > 12 or d > m
    {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (d <= 0 || m <= 0 || m > 12)
            return false;
        if (m == 2 && isleap(y))
            days[2] = 29;
        if (d > days[m])
            return false;
        return true;
    }
    bool parseDate(string s, int &d, int &m, int &y) // format date and split them
    {
        for (char &c : s)
            if (c == '/' || c == '.' || c == ' ')
                c = '-';

        if (sscanf(s.c_str(), "%d-%d-%d", &d, &m, &y) != 3)
            return false;

        if (!validDate(d, m, y))
            return false;

        return true;
    }

public:
    Date(int dd = 1, int mm = 1, int yy = 1) // default constructor
    {
        d = dd;
        m = mm;
        y = yy;
    }
    Date(string s) // string constructo
    {
        if (!parseDate(s, d, m, y))
            d = m = y = 0;
    }
    Date next_day() // function find next day
    {
        int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int nd = d;
        int nm = m;
        int ny = y;
        if (isleap(ny))
            days[2] = 29;
        nd++;
        if (nd > days[nm])
        {
            nd = 1;
            nm++;
        }
        if (nm > 12)
        {
            nm = 1;
            ny++;
        }

        return Date(nd, nm, ny);
    }
    bool isValid(string s) // check if day is valid or not
    {
        int dd, mm, yy;
        return parseDate(s, dd, mm, yy);
    }
    void output() // output day
    {
        cout << d << '/' << m << '/' << y << endl;
    }
};
int main()
{
    cout << "Nhap ngay/thang/nam: ";
    string s;
    Date a;
    // loop until input a valid day
    while (true)
    {
        getline(cin, s);
        if (a.isValid(s) == false)
            cout << "Ngay da nhap sai, nhap lai: ";
        else
        {
            a = Date(s);
            break;
        }
    }
    // answer
    Date next = a.next_day();
    cout << "Ngay tiep theo la: ";
    next.output();
    return 0;
}