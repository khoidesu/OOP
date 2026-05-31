#include "dssv.h"

#include "caodang.h"
#include "daihoc.h"
using namespace std;

void dssv::Nhap()
{
    cout << "Nhap so sinh vien: ";
    cin >> n;
    sinhvien *p = nullptr;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap loai sinh vien (1.Cao dang| 2.Dai hoc): ";
        int k;
        cin >> k;
        if (k == 1)
            p = new caodang();
        else
            p = new daihoc();
        p->Nhap();
        a.push_back(p);
    }
}

void dssv::Xuat()
{
    cout << "DANH SACH SINH VIEN: \n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Sinh vien ";
        if (a[i]->Loai() == 1)
            cout << "cao dang\n";
        else
            cout << "dai hoc\n";
        a[i]->Xuat();
        cout << endl;
    }
    cout << endl;
}

void dssv::XuatTN()
{
    cout << "DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP: \n";
    for (int i = 0; i < n; i++)
    {
        if (a[i]->isTN() == true)
        {
            cout << i + 1 << ". Sinh vien ";
            if (a[i]->Loai() == 1)
                cout << "cao dang\n";
            else
                cout << "dai hoc\n";
            a[i]->Xuat();
            cout << endl;
        }
    }
    cout << endl;
}

void dssv::XuatKTN()
{
    cout << "DANH SACH SINH VIEN CHUA DU DIEU KIEN TOT NGHIEP: \n";
    for (int i = 0; i < n; i++)
    {
        if (a[i]->isTN() == false)
        {
            cout << i + 1 << ". Sinh vien ";
            if (a[i]->Loai() == 1)
                cout << "cao dang\n";
            else
                cout << "dai hoc\n";
            a[i]->Xuat();
            cout << endl;
        }
    }
    cout << endl;
}

void dssv::SVCDCaoNhat()
{
    sinhvien *res = nullptr;
    res = new caodang();
    double Max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Loai() == 1)
        {
            if (a[i]->getDiem() > Max)
            {
                Max = a[i]->getDiem();
                res = a[i];
            }
        }
    }
    cout << "Sinh vien cao dang co diem trung binh cao nhat: \n";
    res->Xuat();
    cout << endl;
}

void dssv::SVDHCaoNhat()
{
    sinhvien *res = nullptr;
    res = new daihoc();
    double Max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Loai() == 2)
        {
            if (a[i]->getDiem() > Max)
            {
                Max = a[i]->getDiem();
                res = a[i];
            }
        }
    }
    cout << "Sinh vien dai hoc co diem trung binh cao nhat: \n";
    res->Xuat();
    cout << endl;
}

void dssv::CntKTN()
{
    int cntcd = 0, cntdh = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->isTN() == false)
        {
            if (a[i]->Loai() == 1)
                cntcd++;
            else if (a[i]->Loai() == 2)
                cntdh++;
        }
    }
    cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep: " << cntcd << endl;
    cout << "So luong sinh vien dai hoc khong du dieu kien tot nghiep: " << cntdh << endl;
    cout << endl;
}