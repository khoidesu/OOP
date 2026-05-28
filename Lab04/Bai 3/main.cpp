#include <bits/stdc++.h>
#include "CTime.cpp"
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    CTime a(13, 59, 59);
    // cin >> a;

    CTime cong = a + 10;
    CTime tru = a - 10;
    cout << cong;
    cout << endl;
    cout << tru;
    cout << endl;

    CTime aplusplus = a++;
    cout << a << endl;
    CTime plusplusa = ++a;
    cout << a << endl;
    return 0;
}