#include <bits/stdc++.h>
#include "csophuc.cpp"
using namespace std;
signed main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin.tie(NULL);
     csophuc a(7, 24);
     csophuc b(-2, 5);
     // cin >> a;
     // cin >> b;

     cout << a;
     cout << endl;
     cout << b;
     cout << endl;

     if (a == b)
          cout << "a == b";
     else if (a != b)
          cout << "a != b";
     cout << endl;

     csophuc tong = a + b;
     csophuc hieu = a - b;
     csophuc tich = a * b;
     csophuc thuong = a / b;

     cout << "Tong: "
          << tong << endl;
     cout << "Hieu: "
          << hieu << endl;
     cout << "Tich: "
          << tich << endl;
     cout << "Thuong: "
          << thuong << endl;
     return 0;
}