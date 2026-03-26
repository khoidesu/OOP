#include <bits/stdc++.h>
using namespace std;
class SoPhuc
{
private:
    double thuc;
    double ao;

public:
    SoPhuc(double dThuc = 1, double dAo = 1)
    {
        thuc = dThuc;
        ao = dAo;
    }
    void changeThuc(double dThuc)
    {
        thuc = dThuc;
    }
    void changeAo(double dAo)
    {
        ao = dAo;
    }
    double getThuc()
    {
        return thuc;
    }
    double getAo()
    {
        return ao;
    }
    void getSoPhuc()
    {
        cout << thuc;
        if (ao == 0)
            return;
        if (ao > 0)
            cout << " + " << ao;
        if (ao < 0)
            cout << " - " << abs(ao);
        cout << "i";
    }
    SoPhuc Cong(SoPhuc b)
    {
        return SoPhuc(this->thuc + b.thuc, this->ao + b.ao);
    }
    SoPhuc Tru(SoPhuc b)
    {
        return SoPhuc(this->thuc - b.thuc, this->ao - b.ao);
    }
    SoPhuc Nhan(SoPhuc b)
    {
        return SoPhuc(this->thuc * b.thuc - this->ao * b.ao, this->thuc * b.ao + this->ao * b.thuc);
    }
    SoPhuc Chia(SoPhuc b)
    {
        double mauSo = b.thuc * b.thuc + b.ao * b.ao;
        if (mauSo == 0)
        {
            cout << "[Loi: Mau so bang 0, khong the chia!] ";
            return SoPhuc(0, 0);
        }
        return SoPhuc((this->thuc * b.thuc + this->ao * b.ao) / mauSo, (b.thuc * this->ao - this->thuc * b.ao) / mauSo);
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
    SoPhuc a(10, 5); // tạo số phức khi biết phần tử thật và ảo

    a.changeThuc(18); // thay đổi số thực
    a.changeAo(11);   // thay đổi số ảo

    cout << a.getThuc() << endl; // lấy giá trị thực
    cout << a.getAo() << endl;   // lấy giá trị ảo

    int x, y;
    cout << "\nNhap so thuc A: ";
    cin >> x >> y;
    SoPhuc b(x, y); // nhập số phức

    a.getSoPhuc(); // xuất số phức;
    cout << endl;

    cout << "A + B = ";
    SoPhuc c = a.Cong(b); // cộng số phức
    c.getSoPhuc();
    cout << endl;
    cout << "A - B = "; // trừ số phức
    c = a.Tru(b);
    c.getSoPhuc();
    cout << endl;
    cout << "A * B = "; // nhân số phức
    c = a.Nhan(b);
    c.getSoPhuc();
    cout << endl;
    cout << "A / B = "; // chia số phức
    c = a.Chia(b);
    c.getSoPhuc();
    cout << endl;
    return 0;
}