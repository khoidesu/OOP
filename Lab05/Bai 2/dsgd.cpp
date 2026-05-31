#include "dsgd.h"

#include "dat.h"
#include "nhapho.h"
#include "canho.h"

using namespace std;

void dsgd::Nhap()
{
    cout << "Nhap so luong giao dich: ";
    cin >> n;
    giaodich *p = nullptr;
    for (int i = 0; i < n; i++)
    {
        int k;
        cout << "Nhap loai giao dich (1.Dat| 2.Nha| 3.Can ho chung cu): ";
        cin >> k;
        if (k == 1)
            p = new dat();
        else if (k == 2)
            p = new nhapho();
        else if (k == 3)
            p = new canho();
        p->Nhap();
        a.push_back(p);
    }
}

void dsgd::Xuat()
{
    cout << "DANH SACH CAC GIAO DICH: \n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Giao dich ";
        if (a[i]->Loai() == 1)
            cout << "Dat\n";
        else if (a[i]->Loai() == 2)
            cout << "Nha pho\n";
        else
            cout << "Can ho chung cu\n";

        a[i]->Xuat();
        cout << "Thanh tien: ";
        cout << a[i]->ThanhTien() << endl;
        cout << endl;
    }
}

void dsgd::Count()
{
    int cnt_dat = 0;
    int cnt_nha = 0;
    int cnt_cc = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]->Loai() == 1)
            cnt_dat++;
        else if (a[i]->Loai() == 2)
            cnt_nha++;
        else
            cnt_cc++;
    }
    cout << "Co " << cnt_dat << " giao dich dat!\n";
    cout << "Co " << cnt_nha << " giao dich nha pho!\n";
    cout << "Co " << cnt_cc << " giao dich can ho chung cu!\n";
    cout << endl;
}

void dsgd::Average()
{
    double avg = 0;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]->Loai() == 3)
        {
            avg += a[i]->ThanhTien();
            cnt++;
        }
    }
    avg /= cnt;
    cout << "Thanh tien trung binh cua giao dich can ho chung cu la: " << avg << endl;
    cout << endl;
}

void dsgd::findMax()
{
    double Max = -1;
    giaodich *res = nullptr;
    res = new nhapho();

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]->ThanhTien() > Max)
        {
            Max = a[i]->ThanhTien();
            res = a[i];
        }
    }
    cout << "Giao dich Nha pho co gia tri cao nhat la: \n";
    res->Xuat();
    cout << "Thanh tien: " << res->ThanhTien() << endl;
    cout << endl;
}

void dsgd::findX()
{
    int id = 0;
    cout << "DANH SACH GIAO DICH VAO THANG 12/2024: \n";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]->getDate().compare() == true)
        {
            cout << ++id << endl;
            a[i]->Xuat();
        }
    }
}