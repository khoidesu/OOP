#include "dsnv.h"

#include "laptrinhvien.h"
#include "kiemchungvien.h"

using namespace std;

void dsnv::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    nhanvien *p = NULL;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap loai nhan vien (1. Lap trinn vien| 2.Kiem chung vien): ";
        int type;
        cin >> type;
        if (type == 1)
            p = new laptrinhvien();
        else
            p = new kiemchungvien();
        p->Nhap();
        a.push_back(p);
    }
}

void dsnv::Xuat()
{
    cout << "DANH SACH NHAN VIEN:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ";
        if (a[i]->Loai() == 1)
            cout << "Lap trinh vien\n";
        else
            cout << "Kiem chung vien\n";
        a[i]->Xuat();
        cout << "Luong: " << a[i]->Luong() << endl;
        cout << endl;
    }
    cout << endl;
}

void dsnv::DuoiTB()
{
    cout << "DANH SACH NHAN VIEN CO LUONG DUOI TRUNG BINH:\n";

    long long ltb = 0;
    for (int i = 0; i < n; i++)
        ltb += a[i]->Luong();
    ltb /= n;

    for (int i = 0; i < n; i++)
    {
        if (a[i]->Luong() < ltb)
        {
            if (a[i]->Loai() == 1)
                cout << "Loai: Lap trinh vien\n";
            else
                cout << "Loai: Kiem chung vien\n";
            a[i]->Xuat();
            cout << "Luong: " << a[i]->Luong() << endl;
            cout << endl;
        }
    }
    cout << endl;
}

void dsnv::nvMax()
{
    cout << "NHAN VIEN CO LUONG CAO NHAT:\n";
    nhanvien *p = NULL;
    long long Max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Luong() > Max)
        {
            Max = a[i]->Luong();
            if (a[i]->Loai() == 1)
                p = new laptrinhvien();
            else
                p = new kiemchungvien();
            p = a[i];
        }
    }
    p->Xuat();
    cout << "Luong: " << p->Luong() << endl;
}

void dsnv::nvMin()
{
    cout << "NHAN VIEN CO LUONG THAP NHAT:\n";
    nhanvien *p = NULL;
    long long Min = 1e18;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Luong() < Min)
        {
            Min = a[i]->Luong();
            if (a[i]->Loai() == 1)
                p = new laptrinhvien();
            else
                p = new kiemchungvien();
            p = a[i];
        }
    }
    p->Xuat();
    cout << "Luong: " << p->Luong() << endl;
}

void dsnv::nvltMax()
{
    cout << "LAP TRINH VIEN CO LUONG CAO NHAT:\n";

    nhanvien *p = NULL;
    p = new laptrinhvien();
    long long Max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Loai() == 1)
            if (a[i]->Luong() > Max)
            {
                Max = a[i]->Luong();
                p = a[i];
            }
    }
    p->Xuat();
    cout << "Luong: " << p->Luong() << endl;
}

void dsnv::nvkcMin()
{
    cout << "KIEM CHUNG VIEN CO LUONG THAP NHAT:\n";
    nhanvien *p = NULL;
    p = new kiemchungvien();
    long long Min = 1e18;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Luong() < Min)
        {
            Min = a[i]->Luong();
            p = a[i];
        }
    }
    p->Xuat();
    cout << "Luong: " << p->Luong() << endl;
}