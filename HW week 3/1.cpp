#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    double math;
    double lec;

public:
    Student(string s, double x, double y)
    {
        name = s;
        math = x;
        lec = y;
    }
    double Average()
    {
        return (math + lec) / 2.0;
    }
    void getName()
    {
        cout << name << endl;
    }
    void getMath()
    {
        cout << math << endl;
    }
    void getLec()
    {
        cout << lec << endl;
    }
    void getAvg()
    {
        cout << Average() << endl;
    }
};
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    string name;
    double math, lec;
    cout << "Nhap ho va ten hoc sinh: ";
    getline(cin, name);
    cout << "Nhap diem toan: ";
    cin >> math;
    cout << "Nhap diem van: ";
    cin >> lec;
    Student a(name, math, lec);

    cout << "Ho va Ten: ";
    a.getName();
    cout << "Diem toan: ";
    a.getMath();
    cout << "Diem van: ";
    a.getLec();
    cout << "Diem trung binh: ";
    a.getAvg();
    return 0;
}