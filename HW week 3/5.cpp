#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string ID;
    string name;
    string gender;
    double avg;
    int y_born;

public:
    Student(string sid, string sname, string sgender, double davg, int iy_born)
    {
        ID = sid;
        name = sname;
        gender = sgender;
        avg = davg;
        y_born = iy_born;
    }
    void getInfo()
    {
        cout << "ID: ";
        cout << ID;
        cout << "\nName: ";
        cout << name;
        cout << "\nGender: ";
        cout << gender;
        cout << "\nAvg Score: ";
        cout << avg;
        cout << "\nYear born: ";
        cout << y_born;
        cout << endl;
    }
    void cmpAvg(Student b)
    {
        cout << "Hoc sinh co diem trung binh cao hon la: \n";
        if (this->avg > b.avg)
        {
            this->getInfo();
        }
        else if (this->avg < b.avg)
        {
            b.getInfo();
        }
        else
        {
            cout << "Hai hoc sinh co cung diem trung binh.";
        }
        cout << endl;
    }
    void cmpAge(Student b)
    {
        cout << "Hoc sinh co tuoi nho hon la: \n";
        if (this->y_born > b.y_born)
        {
            this->getInfo();
        }
        else if (this->y_born < b.y_born)
        {
            b.getInfo();
        }
        else
        {
            cout << "Hai hoc sinh co tuoi bang nhau.";
        }
        cout << endl;
    }
};
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
#define name "TASK"
    if (fopen(name ".inp", "r"))
    {
        freopen(name ".inp", "r", stdin);
        freopen(name ".out", "w", stdout);
    }
    string ID;
    string Name;
    string gender;
    double avg;
    int yborn;
    cout << "ID hoc sinh A: ";
    cin >> ID;
    cout << "Ten hoc sinh A: ";
    cin.ignore();
    getline(cin, Name);
    cout << "Gioi tinh hoc sinh A: ";
    cin >> gender;
    cout << "Diem trung binh hoc sinh A: ";
    cin >> avg;
    cout << "Nam sinh hoc sinh A: ";
    cin >> yborn;
    Student a(ID, Name, gender, avg, yborn);

    cout << endl;
    cout << "ID hoc sinh B: ";
    cin >> ID;
    cout << "Ten hoc sinh B: ";
    cin.ignore();
    getline(cin, Name);
    cout << "Gioi tinh hoc sinh B: ";
    cin >> gender;
    cout << "Diem trung binh hoc sinh B: ";
    cin >> avg;
    cout << "Nam sinh hoc sinh B: ";
    cin >> yborn;
    Student b(ID, Name, gender, avg, yborn);

    cout << endl;
    a.cmpAvg(b);
    cout << endl;
    a.cmpAge(b);
    cout << endl;
    return 0;
}