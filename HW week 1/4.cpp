#include <bits/stdc++.h>
using namespace std;
struct person
{
    string id;
    string name;
    string department;
    int salary;
    int bonus;
    int net_salary;
};

bool cmp(person a, person b)
{
    if (a.department != b.department)
        return a.department < b.department;
    return (a.id > b.id);
}
person arr[10000];
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int n = 10;
    cout << "Nhap so nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "ID nhan vien thu " << i + 1 << ": ";
        cin >> arr[i].id;
        cout << "Ten nhan vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, arr[i].name);
        cout << "Phong ban nhan vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, arr[i].department);
        cout << "luong co ban nhan vien thu " << i + 1 << ": ";
        cin >> arr[i].salary;
        cout << "Thuong nhan vien thu " << i + 1 << ": ";
        cin >> arr[i].bonus;
    }

    // testcase
    // person arr[10] = {
    //     {"NV001", "Nguyen Van A", "IT", 10000000, 2000000, 1200000},
    //     {"NV002", "Tran Thi B", "HR", 9000000, 1500000, 1050000},
    //     {"NV003", "Le Van C", "Finance", 12000000, 3000000, 1500000},
    //     {"NV004", "Pham Thi D", "Marketing", 9500000, 1000000, 880000},
    //     {"NV005", "Hoang Van E", "IT", 11000000, 2500000, 1350000},
    //     {"NV006", "Vo Thi F", "Sales", 8500000, 1200000, 880000},
    //     {"NV007", "Dang Van G", "Admin", 8000000, 800000, 880000},
    //     {"NV008", "Bui Thi H", "HR", 8000000, 1100000, 1030000},
    //     {"NV009", "Do Van I", "Finance", 8000000, 3500000, 1650000},
    //     {"NV010", "Phan Thi K", "IT", 10500000, 1800000, 1230000}};

    for (int i = 0; i < n; i++)
        arr[i].net_salary = arr[i].salary + arr[i].bonus;

    cout << "Tong thuc lanh cua tat ca nhan vien la: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i].net_salary;
    cout << sum << endl;
    cout << endl;

    cout << "Nhung nhan vien co muc luong co ban thap nhat:\n";
    int Min_salary = arr[0].salary;
    for (int i = 1; i < n; i++)
        if (arr[i].salary < Min_salary)
            Min_salary = arr[i].salary;
    for (int i = 0; i < n; i++)
        if (arr[i].salary == Min_salary)
            cout << arr[i].id << " " << arr[i].name << endl;
    cout << endl;

    cout << "So luong nhan vien co muc thuong >= 1200000 la:\n";
    for (int i = 0; i < n; i++)
        if (arr[i].bonus >= 1200000)
            cout << arr[i].id << " " << arr[i].name << endl;
    cout << endl;

    cout << "Nhan sach nhan vien da sap xep:\n";
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].department << " " << arr[i].net_salary << endl;
    return 0;
}