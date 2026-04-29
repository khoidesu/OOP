#include "cNhanVienSX.h"
class cDSNhanVienSX
{
private:
    int n;
    cNhanVienSX *ds;

public:
    cDSNhanVienSX();
    cDSNhanVienSX(int _n, cNhanVienSX *_ds);
    cDSNhanVienSX(const cDSNhanVienSX &other);
    void Nhap();
    void Xuat();
    cNhanVienSX LuongThapNhat();
    int TongLuong();
    cNhanVienSX TuoiCaoNhat();
    void SortLuong();
    ~cDSNhanVienSX();
};
