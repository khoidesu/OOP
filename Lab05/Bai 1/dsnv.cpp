#include "dsnv.h"

#include "nhanvien.h"
#include "vanphong.h"
#include "sanxuat.h"
using namespace std;

void dsnv::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    nhanvien *p = nullptr;
    for (int i = 0; i < n; i++)
    {
        int type;
        cout << "Nhap loai nhan vien: ";
        cin >> type;
        if (type == 1)
            p = new vanphong();
        else
            p = new sanxuat();
        p->Nhap();
        a.push_back(p);
    }
}

void dsnv::Xuat()
{
    cout << "DANH SACH NHAN VIEN: \n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ";
        if (a[i]->Loai() == 1)
            cout << "van phong\n";
        else
            cout << "san xuat\n";
        a[i]->Xuat();
        cout << "Luong: " << a[i]->Luong() << endl;
        cout << endl;
    }
}

void dsnv::TongLuong()
{
    long long res = 0;
    for (int i = 0; i < a.size(); i++)
        res += a[i]->Luong();
    cout << "Tong luong ma cong ty phai tra: " << res << endl;
    cout << endl;
}

void dsnv::MinLuong()
{
    nhanvien *res = nullptr;
    res = new sanxuat();
    int Min = 1e9;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]->Loai() == 2)
        {
            if (a[i]->Luong() < Min)
            {
                Min = a[i]->Luong();
                res = (sanxuat *)a[i];
            }
        }
    }
    cout << "Nhan vien san xuat co luong thap nhat: \n";
    res->Xuat();
}

void dsnv::LonTuoiNhat()
{
    vanphong *res = nullptr;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]->Loai() == 1)
        {
            if (res == nullptr ||
                a[i]->DOB().compare(res->DOB()) == 1)
            {
                res = (vanphong *)a[i];
            }
        }
    }

    if (res != nullptr)
    {
        cout << "Nhan vien van phong co tuoi lon nhat:\n";
        res->Xuat();
    }
    else
    {
        cout << "Khong co nhan vien van phong\n";
    }
}