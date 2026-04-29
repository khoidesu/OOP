#include <iostream>
#include <utility>
#include "cArray.h"
using namespace std;
#define MIN -1000
#define MAX 1000

cArray::cArray(int size)
{
    n = size;
    arr = new int[n];
}

cArray::cArray(int _n, int *_arr)
{
    n = _n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = _arr[i];
    }
}

cArray::cArray(const cArray &other)
{
    n = other.n;
    arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = other.arr[i];
    }
}

cArray::~cArray()
{
    delete[] arr;
}

int cArray::getSize()
{
    return n;
}

void cArray::Nhap()
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    arr = new int[n];
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void cArray::Xuat()
{
    cout << "Mang: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
Hàm tạo mảng ngẫu nhiên
input: không có
output: mảng ngẫu nhiên
*/
void cArray::TaoNgauNhien()
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int x = 2 * (MIN + rand() % (MAX - MIN + 1));
        arr[i] = x;
    }
}

/*
Hàm đếm số lượng phần tử x trong mảng
input: giá trị x
output: số lượng phần tử x trong mảng
*/
int cArray::SoLuongX(int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            cnt++;
    }
    return cnt;
}

/*
Hàm kiểm tra mảng có tăng dần hay không
input: không có (kiểm tra mảng arr)
output: true nếu mảng tăng dần, false nếu không
*/
bool cArray::isTang()
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}

/*
Hàm tìm số lẻ nhỏ nhất trong mảng
input: không có (mảng arr)
output: số lẻ nhỏ nhất trong mảng
*/
int cArray::minLe()
{
    int min = 1e9;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] < min)
            min = arr[i];
    }
    return (min == 1e9) ? -1 : min;
}

/*
Hàm kiểm tra số nguyên tố
input: số nguyên x
output: true nếu x là số nguyên tố, false nếu không
*/
bool isPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

/*
Hàm tìm số nguyên tố lớn nhất trong mảng
input: không có (mảng arr)
output: số nguyên tố lớn nhất trong mảng
*/
int cArray::maxPrime()
{
    int MaxP = -1;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]) && arr[i] > MaxP)
            MaxP = arr[i];
    }
    return (MaxP == -1) ? -1 : MaxP;
}

/*
Hàm sắp xếp mảng tăng dần dùng QuickSort
input: không có (mảng arr)
output: mảng arr sau khi sắp xếp tăng dần
*/
void cArray::SapXepTangDan(int low, int high)
{
    if (low < high)
    {

        // pi is Partitioning Index, arr[p] is now at
        // right place

        int tmp = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] <= tmp)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pivot = (i + 1);

        SapXepTangDan(low, pivot - 1);
        SapXepTangDan(pivot + 1, high);
    }
}

/*
Hàm sắp xếp mảng giảm dần dùng QuickSort (đảo ngược hàm tăng dần -> giảm dần)
input: không có (mảng arr)
output: mảng arr sau khi sắp xếp giảm dần
*/
void cArray::SapXepGiamDan()
{
    SapXepTangDan(0, n - 1);
    reverse(arr, arr + n);
}
