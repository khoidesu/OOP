#include <bits/stdc++.h>
using namespace std;
class cArray
{
private:
    int n;
    int *arr;

    int random(int a, int b)
    {
        return (a + rand() % (b - a + 1));
    }

public:
    cArray(int iN)
    {
        n = iN;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = random(-1000, 1000);
    }
    ~cArray()
    {
        if (arr != nullptr)
        {
            delete[] arr;
        }
    }
    void getArray()
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    int findLargestNegativeNum()
    {
        int res = -1e9;
        for (int i = 0; i < n; i++)
            if (arr[i] < 0 && arr[i] > res)
                res = arr[i];
        return res;
    }
    int countX(int x)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] == x)
                cnt++;
        return cnt;
    }
    bool isDown()
    {
        for (int i = 1; i < n; i++)
            if (arr[i - 1] < arr[i])
                return false;
        return true;
    }
    void sortArray()
    {
        sort(arr, arr + n);
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
    srand((unsigned int)time(0));

    int n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    cArray a(n);

    cout << "Mang a: ";
    a.getArray();
    cout << endl;
    cout << "Phan tu am lon nhat trong mang la: " << a.findLargestNegativeNum() << endl;
    cout << "Nhap phan tu x cam tim: ";
    int x;
    cin >> x;
    cout << "So luong phan tu x co trong mang: " << a.countX(x) << endl;
    if (a.isDown() == true)
        cout << "Mang giam dan\n";
    else
        cout << "Mang khong giam dan\n";
    cout << "Mang sau khi sap xep: ";
    a.sortArray();
    a.getArray();
    return 0;
}