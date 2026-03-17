#include <iostream>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
/*
    Input valid:
    [a b]
    [a/b]
    With some special cases [a  b], [ a b ], [a/ b], [a /b], [a / b], [ a / b ] code auto detect and convert to [a b] or [a/b]
*/
string inp1, inp2;
class Fraction
{
private:
    int tu;
    int mau;

    int gcd(int a, int b) // find gcd of a and b
    {
        if (b == 0)
            return abs(a);
        return gcd(b, a % b);
    }
    void rutgon() // shorten fraction
    {
        int ucln = gcd(tu, mau);
        tu = tu / ucln;
        mau = mau / ucln;
        if (mau < 0) // check negative
        {
            tu = -tu;
            mau = -mau;
        }
    }

    void cleannum(string &s) // clean extra ' '
    {
        if (s.find('/') == string::npos) //' '
        {
            while (s[0] == ' ')
                s.erase(0, 1);
            while (s[(int)s.size() - 1] == ' ')
                s.erase((int)s.size() - 1, 1);
            for (int i = 0; i < s.size(); i++)
                if (s[i] == ' ')
                    while (s[i + 1] == ' ')
                        s.erase(i + 1, 1);
        }
        else // '/'
        {
            for (int i = 0; i < s.size(); i++)
                if (s[i] == ' ')
                    while (s[i] == ' ')
                        s.erase(i, 1);
        }
    }
    int str_to_i(string s, bool &overflow) // convert string to integer
    {
        bool isneg = false;
        if (s[0] == '-')
        {
            isneg = true;
            s.erase(0, 1);
        }
        else if (s[0] == '+')
        {
            isneg = false;
            s.erase(0, 1);
        }
        int res = 0;
        for (auto it : s)
        {
            int digit = it - '0';
            if ((res > (INT_MAX - digit) / 10))
            {
                overflow = true;
                return 0;
            }
            res = res * 10 + digit;
        }
        return ((isneg) ? -res : res);
    }
    bool isfraction(string s, string a, string b) // check is a/b is a valid fraction
    {
        // in case negative and positive number
        if (a[0] == '-' || a[0] == '+')
            a.erase(0, 1);
        if (b[0] == '-' || b[0] == '+')
            b.erase(0, 1);
        // in case /123 or 123/
        if (a.size() == 0 || b.size() == 0)
            return false;

        int cnt = 0;
        for (auto it : s)
            if (it == ' ')
                cnt++;
        if (cnt > 1)
            return false;
        cnt = 0;
        for (auto it : s)
            if (it == '/')
                cnt++;
        if (cnt > 1)
            return false;

        // check any element num contain char
        for (auto it : a)
            if (it < '0' || it > '9')
                return false;
        for (auto it : b)
            if (it < '0' || it > '9')
                return false;
        return true;
    }
    Fraction split(string s) // split string s to a/b
    {
        cleannum(s);
        Fraction res;
        stringstream ss(s);
        string a, b;
        if (s.find('/') == string::npos) // s contain ' '
        {
            getline(ss, a, ' ');
            getline(ss, b, ' ');
        }
        else // s contain '/'
        {
            getline(ss, a, '/');
            getline(ss, b, '/');
        }
        if (!isfraction(s, a, b)) // auto convert to 0/0 if num is not a fraction
        {
            res.tu = res.mau = 0;
        }
        else
        {
            bool overflow1 = false;
            bool overflow2 = false;
            res.tu = str_to_i(a, overflow1);
            res.mau = str_to_i(b, overflow2);
            if (res.mau == 0 || overflow1 || overflow2)
                res.tu = res.mau = 0;
        }
        return res;
    }

public:
    Fraction() // default constructor
    {
        tu = 0;
        mau = 1;
    }
    Fraction(string s) // constructor with input
    {
        Fraction a = split(s);
        tu = a.tu;
        mau = a.mau;
    }
    void output() // print fraction after shorten
    {
        if (tu % mau == 0)
            cout << tu / mau;
        else
            cout << tu << "/" << mau;
    }
    bool isValid()
    {
        return mau;
    }
    Fraction operator+(Fraction &other) // +
    {
        Fraction res;
        res.tu = tu * other.mau + other.tu * mau;
        res.mau = mau * other.mau;
        res.rutgon();
        return res;
    }
    Fraction operator-(Fraction &other) // -
    {
        Fraction res;
        res.tu = tu * other.mau - other.tu * mau;
        res.mau = mau * other.mau;
        res.rutgon();
        return res;
    }
    Fraction operator*(Fraction &other) // *
    {
        Fraction res;
        res.tu = tu * other.tu;
        res.mau = mau * other.mau;
        res.rutgon();
        return res;
    }
    Fraction operator/(Fraction &other) // /
    {
        Fraction res;
        res.tu = tu * other.mau;
        res.mau = mau * other.tu;
        res.rutgon();
        return res;
    }
};

int main()
{
    // input fraction {a b; a/b}
    Fraction a;
    Fraction b;
    cout << "Nhap phan so a: ";
    getline(cin, inp1);
    cout << "Nhap phan so b: ";
    getline(cin, inp2);
    while (true)
    {
        a = Fraction(inp1);
        b = Fraction(inp2);
        if (a.isValid() == 0 && b.isValid() == 0)
        {
            cout << "Phan so a va b khong hop le, nhap lai:\n";
            cout << "Nhap phan so a: ";
            getline(cin, inp1);
            cout << "Nhap phan so b: ";
            getline(cin, inp2);
        }
        if (a.isValid() == 0)
        {
            cout << "Phan so a khong hop le, nhap lai: ";
            getline(cin, inp1);
        }
        else if (b.isValid() == 0)
        {
            cout << "Phan so b khong hop le, nhap lai: ";
            getline(cin, inp2);
        }
        else
            break;
    }
    // answer
    Fraction Sum = a + b;
    Fraction Diff = a - b;
    Fraction Multi = a * b;
    Fraction Div = a / b;

    cout << "Tong cua 2 phan so la: ";
    Sum.output();
    cout << endl;
    cout << "Hieu cua 2 phan so la: ";
    Diff.output();
    cout << endl;
    cout << "Tich cua 2 phan so la: ";
    Multi.output();
    cout << endl;
    cout << "Thuong cua 2 phan so la: ";
    Div.output();
    cout << endl;
    return 0;
}
