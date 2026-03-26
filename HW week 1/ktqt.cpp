#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string id;
    string name;
    double math;
    double liter;
    double chem;
};
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    Student a;
    cout << "Nhap id hoc sinh: ";
    getline(cin, a.id);
    cout << "Nhap ten hoc sinh: ";
    getline(cin, a.name);
    cout << "Nhap diem mon toan: ";
    cin >> a.math;
    cout << "Nhap diem mon van: ";
    cin >> a.liter;
    cout << "Nhap diem mon hoa: ";
    cin >> a.chem;

    double avg = (a.math + a.liter + a.chem) / 3.0;

    cout << "Id: " << a.id << endl;
    cout << "Ten: " << a.name << endl;
    cout << "Diem toan: " << a.math << endl;
    cout << "Diem van: " << a.liter << endl;
    cout << "Diem hoa: " << a.chem << endl;
    cout << "Diem trung binh: " << avg << endl;
    return 0;
}