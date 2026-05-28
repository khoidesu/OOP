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

cDaThuc &cDaThuc::operator=(const cDaThuc &dt)
{
    if (this == &dt)
        return *this;

    delete[] donThuc;

    n = dt.n;

    if (n > 0)
    {
        donThuc = new cDonThuc[n];

        for (int i = 0; i < n; i++)
        {
            donThuc[i] = dt.donThuc[i];
        }
    }
    else
    {
        donThuc = nullptr;
    }

    return *this;
}

/*
Hàm trừ đa thức
input: đa thức dt
output: hiệu của đa thức hiện tại và dt
*/
cDaThuc cDaThuc::operator-(const cDaThuc &dt)
{
    cDaThuc result;
    result.n = n + dt.n;
    result.donThuc = new cDonThuc[result.n];

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

    sort(result.donThuc, result.donThuc + result.n, [](cDonThuc &a, cDonThuc &b)
         { return a.getSoMu() > b.getSoMu(); });

    int cnt = 0;

    for (int i = 1; i < result.n; i++)
    {
        if (result.donThuc[i].getSoMu() == result.donThuc[cnt].getSoMu())
        {
            double hs = result.donThuc[cnt].getHeSo() + result.donThuc[i].getHeSo();

            result.donThuc[cnt].setHeSo(hs);
        }
        else
        {
            cnt++;
            result.donThuc[cnt] = result.donThuc[i];
        }
    }

    int newN = 0;

    for (int i = 0; i <= cnt; i++)
    {
        if (result.donThuc[i].getHeSo() != 0)
        {
            result.donThuc[newN++] = result.donThuc[i];
        }
    }

    result.n = newN;
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
            double hs = result.donThuc[cnt].getHeSo() + result.donThuc[i].getHeSo();

            result.donThuc[cnt].setHeSo(hs);
        }
        else
        {
            cnt++;
            result.donThuc[cnt] = result.donThuc[i];
        }
    }

    int newN = 0;

    for (int i = 0; i <= cnt; i++)
    {
        if (result.donThuc[i].getHeSo() != 0)
        {
            result.donThuc[newN++] = result.donThuc[i];
        }
    }

    result.n = newN;
    return result;
}

cDaThuc cDaThuc::operator*(const cDaThuc &dt)
{
    cDaThuc res;
    res.n = n * dt.n;
    res.donThuc = new cDonThuc[res.n];
    int id = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < dt.n; j++)
        {
            res.donThuc[id++] = donThuc[i] * dt.donThuc[j];
        }
    }
    sort(res.donThuc, res.donThuc + res.n, [](cDonThuc a, cDonThuc b)
         { return a.getSoMu() > b.getSoMu(); });

    int cnt = 0;
    for (int i = 1; i < res.n; i++)
    {
        if (res.donThuc[i].getSoMu() == res.donThuc[cnt].getSoMu())
        {
            double newHeSo = res.donThuc[cnt].getHeSo() + res.donThuc[i].getHeSo();
            res.donThuc[cnt].setHeSo(newHeSo);
        }
        else
        {
            cnt++;
            res.donThuc[cnt] = res.donThuc[i];
        }
    }
    int newN = 0;

    for (int i = 0; i <= cnt; i++)
    {
        if (res.donThuc[i].getHeSo() != 0)
        {
            res.donThuc[newN++] =
                res.donThuc[i];
        }
    }

    res.n = newN;
    return res;
}

cDaThuc cDaThuc::operator/(const cDaThuc &dt)
{
    if (dt.n == 0)
        throw runtime_error("Khong the chia cho da thuc 0");

    cDaThuc a = *this;
    cDaThuc res;

    auto Head = [](const cDaThuc &a)
    {
        return a.donThuc[0];
    };

    auto Bac = [](const cDaThuc &a)
    {
        if (a.n == 0)
            return -1;

        return a.donThuc[0].getSoMu();
    };

    while (a.n != 0 && Bac(a) >= Bac(dt))
    {
        cDonThuc p[1];

        p[0] = Head(a) / Head(dt);

        cDaThuc tmp(1, p);

        res = res + tmp;

        a = a - (tmp * dt);
    }

    return res;
}
#endif