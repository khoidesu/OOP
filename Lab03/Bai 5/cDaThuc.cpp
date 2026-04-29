#ifndef CDATHUC_CPP
#define CDATHUC_CPP

#include <bits/stdc++.h>
#include "cDaThuc.h"
#include "cDonThuc.h"

cDaThuc::cDaThuc()
{
    n = 0;
    donThuc = nullptr;
}

cDaThuc::cDaThuc(int _n, cDonThuc *_donThuc)
{
    n = _n;
    donThuc = new cDonThuc[n];
    for (int i = 0; i < n; i++)
    {
        donThuc[i] = _donThuc[i];
    }
}

cDaThuc::cDaThuc(const cDaThuc &other)
{
    n = other.n;
    if (n > 0)
    {
        donThuc = new cDonThuc[n];
        for (int i = 0; i < n; i++)
        {
            donThuc[i] = other.donThuc[i];
        }
    }
    else
    {
        donThuc = nullptr;
    }
}

cDaThuc::~cDaThuc()
{
    delete[] donThuc;
}

void cDaThuc::Nhap()
{
    int _n;
    cout << "Nhap so don thuc: ";
    cin >> _n;
    if (_n <= 0)
    {
        delete[] donThuc;
        donThuc = nullptr;
        n = 0;
        return;
    }

    delete[] donThuc;
    n = _n;
    donThuc = new cDonThuc[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap don thuc " << i + 1 << ":" << endl;
        donThuc[i].Nhap();
    }
}

void cDaThuc::Xuat()
{
    if (n <= 0 || donThuc == nullptr)
    {
        cout << "0" << endl;
        return;
    }

    // Print first term (including sign if negative)
    int h = donThuc[0].getHeSo();
    int mu = donThuc[0].getSoMu();
    cout << h << "x^" << mu;

    for (int i = 1; i < n; i++)
    {
        int heSo = donThuc[i].getHeSo();
        int soMu = donThuc[i].getSoMu();
        if (heSo == 0)
            continue;
        if (heSo > 0)
            cout << " + " << heSo << "x^" << soMu;
        else
            cout << " - " << (-heSo) << "x^" << soMu;
    }
    cout << endl;
}

/*
Hàm trừ đa thức
input: đa thức dt
output: hiệu của đa thức hiện tại và dt
*/
cDaThuc cDaThuc::operator-(const cDaThuc &dt)
{
    cDaThuc result;
    int totalTerms = n + dt.n;
    result.donThuc = new cDonThuc[totalTerms];

    for (int i = 0; i < n; i++)
    {
        result.donThuc[i] = donThuc[i];
    }

    // Sao chép và đổi dấu đơn thức của đa thức dt (Đa thức trừ)
    for (int i = 0; i < dt.n; i++)
    {
        result.donThuc[i + n] = dt.donThuc[i];
        // Đổi dấu hệ số
        double currentHeSo = dt.donThuc[i].getHeSo();
        result.donThuc[i + n].setHeSo(-currentHeSo);
    }

    sort(result.donThuc, result.donThuc + totalTerms, [](cDonThuc &a, cDonThuc &b)
         { return a.getSoMu() > b.getSoMu(); });

    int cnt = 0;
    for (int i = 1; i < totalTerms; i++)
    {
        if (result.donThuc[i].getSoMu() == result.donThuc[cnt].getSoMu())
        {
            double newHeSo = result.donThuc[cnt].getHeSo() + result.donThuc[i].getHeSo();
            result.donThuc[cnt].setHeSo(newHeSo);
        }
        else
        {
            if (result.donThuc[cnt].getHeSo() != 0)
                cnt++;
            result.donThuc[cnt] = result.donThuc[i];
        }
    }
    if (result.donThuc[cnt].getHeSo() != 0)
        result.n = cnt + 1;
    else
        result.n = cnt;
    return result;
}

/*
Hàm cộng đa thức
input: đa thức dt
output: tổng của đa thức hiện tại và dt
*/
cDaThuc cDaThuc::operator+(const cDaThuc &dt)
{
    cDaThuc result;
    result.n = n + dt.n;
    result.donThuc = new cDonThuc[result.n];
    for (int i = 0; i < n; i++)
    {
        result.donThuc[i] = donThuc[i];
    }
    for (int i = 0; i < dt.n; i++)
    {
        result.donThuc[i + n] = dt.donThuc[i];
    }
    sort(result.donThuc, result.donThuc + result.n, [](cDonThuc a, cDonThuc b)
         { return a.getSoMu() > b.getSoMu(); });

    int cnt = 0;
    for (int i = 1; i < result.n; i++)
    {
        if (result.donThuc[i].getSoMu() == result.donThuc[cnt].getSoMu())
        {
            double newHeSo = result.donThuc[cnt].getHeSo() + result.donThuc[i].getHeSo();
            result.donThuc[cnt].setHeSo(newHeSo);
        }
        else
        {
            if (result.donThuc[cnt].getHeSo() != 0)
                cnt++;
            result.donThuc[cnt] = result.donThuc[i];
        }
    }
    if (result.donThuc[cnt].getHeSo() != 0)
        result.n = cnt + 1;
    else
        result.n = cnt;
    return result;
}

#endif