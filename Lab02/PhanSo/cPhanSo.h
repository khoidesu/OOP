class cPhanSo
{
private:
    int iTu;
    int iMau;

public:
    void Nhap();
    void Xuat();
    void RutGon();

    cPhanSo Tong(cPhanSo b);
    cPhanSo Hieu(cPhanSo b);
    cPhanSo Tich(cPhanSo b);
    cPhanSo Thuong(cPhanSo b);

    int SoSanh(cPhanSo b); // 1: a>b \\\ -1: a<b \\\ 0: a=b
};