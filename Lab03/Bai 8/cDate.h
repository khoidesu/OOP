#ifndef CDATE_H
#define CDATE_H

class cDate
{
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    cDate();
    cDate(int ngay, int thang, int nam);
    cDate(const cDate &other);
    void Nhap();
    void Xuat();

    int getNgay();
    int getThang();
    int getNam();
};

#endif