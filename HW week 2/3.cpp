#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int b[1001][1001];
int sum[1001][1001];
int sub[1001][1001];
int multi[1001][1001];
int n, m;
int p, q;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> p >> q;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < m; k++)
                multi[i][j] += a[i][k] * b[k][j];

    cout << "Ma tran tong:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
    cout << "Ma tran hieu:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << sub[i][j] << " ";
        cout << endl;
    }
    cout << "Ma tran tich:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << multi[i][j] << " ";
        cout << endl;
    }

    return 0;
}