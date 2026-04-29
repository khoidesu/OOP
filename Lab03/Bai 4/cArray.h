class cArray
{
private:
    int n;
    int *arr;

public:
    cArray(int size);
    cArray(int _n, int *_arr);
    cArray(const cArray &other);
    ~cArray();
    void Nhap();
    void Xuat();
    void TaoNgauNhien();
    int SoLuongX(int x);
    bool isTang();
    int minLe();
    int maxPrime();
    void SapXepTangDan(int low, int high);
    void SapXepGiamDan();
    int getSize();
};