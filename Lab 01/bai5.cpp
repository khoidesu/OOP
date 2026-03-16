#include <iostream>
#include <sstream>
using namespace std;
class Student
{
private:
    string name;
    double math;
    double lec;

    double s_to_d(string s)
    {
        if (s.size() == 0)
            return -1;
        int cnt = 0;
        for (auto it : s)
            if (it == '.')
                cnt++;
        if (cnt > 1)
            return -1;
        if (s[0] == '.' || s[s.size() - 1] == '.')
            return -1;
        for (auto it : s)
        {
            if (it == '.')
                continue;
            if (it < '0' || it > '9')
                return -1;
        }
        stringstream ss(s);
        double num;
        ss >> num;
        return double((num >= 0) ? num : -1);
    }

public:
    Student(string n, string sm, string sl)
    {
        double m = s_to_d(sm);
        double l = s_to_d(sl);
        name = n;
        math = m;
        lec = l;
    }
    Student()
    {
        name = "";
        math = 0;
        lec = 0;
    }
    bool isValid()
    {
        if (math < 0 || math > 10)
            return false;
        if (lec < 0 || lec > 10)
            return false;
        return true;
    }
    void output()
    {
        cout << "Ho ten: " << name << endl;
        cout << "Diem toan: " << math << endl;
        cout << "Diem van: " << lec << endl;
        cout << "Diem trung binh: ";
        double avg = (math + lec) / 2.0;
        cout << avg << endl;
    }
};
int main()
{
    string name, math, lec;
    cout << "Nhap ten: ";
    getline(cin, name);
    Student a;
    while (true)
    {
        cout << "Nhap diem toan: ";
        cin >> math;
        cout << "Nhap diem van: ";
        cin >> lec;
        a = Student(name, math, lec);
        if (a.isValid() == 0)
            cout << "Nhap diem sai, nhap lai: \n";
        else
            break;
    }
    a.output();
}