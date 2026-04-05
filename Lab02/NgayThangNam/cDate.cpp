#include <iostream>
#include "cDate.h"
using namespace std;
void cDate::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> iNgay;
    cout << "Nhap thang: ";
    cin >> iThang;
    cout << "Nhap nam: ";
    cin >> iNam;
}

void cDate::Xuat()
{
    cout << "Ngay " << iNgay << " Thang " << iThang << " Nam " << iNam;
}

cDate cDate::NgayThangNamTiepTheo() // tính ngày tiếp theo
{
    // Khai báo số ngày trong tháng
    int daysinmonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Kiểm tra năm nhuận
    if (iThang == 2 && ((iNam % 400 == 0) || (iNam % 4 == 0 && iNam % 100 != 0)))
        daysinmonth[2] = 29;

    cDate next; // khai báo biến ngày tiếp theo

    // Tính ngày tiếp theo
    if (iNgay == 31 && iThang == 12) // nếu là ngày cuối năm thì + 1 năm mới
    {
        next.iNgay = 1;
        next.iThang = 1;
        next.iNam = iNam + 1;
    }
    else if (iNgay == daysinmonth[iThang]) // nếu là ngày cuối tháng thì + 1 tháng mới
    {
        next.iNgay = 1;
        next.iThang = iThang + 1;
        next.iNam = iNam;
    }
    else // nếu không phải là ngày cuối tháng thì + 1 ngày mới
    {
        next.iNgay = iNgay + 1;
        next.iThang = iThang;
        next.iNam = iNam;
    }
    // Trả về ngày tiếp theo
    return next;
}
