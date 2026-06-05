#include "dskh.h"

#include "loaia.h"
#include "loaib.h"
#include "loaic.h"

using namespace std;

void dskh::Nhap() {
    cin >> x >> y >> z;
    khachhang* p = NULL;
    for(int i = 0; i < x; i++) {
        p = new loaia();
        p->Nhap();
        a.push_back(p);
    }

    p = NULL;
    for(int i = 0; i < y; i++) {
        p = new loaib();
        p->Nhap();
        b.push_back(p);
    }

    p = NULL;
    for(int i = 0; i < z; i++) {
        p = new loaic();
        p->Nhap();
        c.push_back(p);
    }
}

void dskh::Xuat() {
    long long res = 0;
    cout << a.size() << " " << b.size() << " " << c.size() << endl;
    for(int i = 0; i < x; i++) {
        a[i]->Xuat();
        res += a[i]->sotien();
        cout << endl;
    }
    for(int i = 0; i < y; i++) {
        b[i]->Xuat();
        res += b[i]->sotien();
        cout << endl;
    }
    for(int i = 0; i < z; i++) {
        c[i]->Xuat();
        res += c[i]->sotien();
        cout << endl;
    }
    cout << res;
}