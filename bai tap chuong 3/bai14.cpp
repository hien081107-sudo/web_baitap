//14. Phi ngan hang
//Ngan hang tinh phi 10$/1 thang cong voi phi su dung sec nhu sau:
//0.1$ moi sec neu so luong khong qua 20 sec
//0.08$ moi sec neu so luong sec trong khoang 20 den 39
//0.06$ moi sec neu so luong sec trong khoang 40 den 59
//0.04$ moi sec neu so luong sec trong tu 60 tro len
//Mat khac se tinh them 15$ neu so du trong tai khoan (truoc khi tru 2 loai phi o tren) duoi 400$.
//Viet chuong trinh nhap vao so du tai khoan va so luong sec su dung trong thang sau do in ra cac khoan phi nguoi dung phai tra.
//Chu y: khong chap nhan nguoi dung nhap so am.

#include <iostream>
using namespace std;
int main() {
    double soDu;
    int soSec;
    double phiCoBan = 10.0;
    double phiSec = 0.0;
    double phiThem = 0.0;
    double tongPhi;
    cout << "Nhap so du tai khoan: ";
    cin >> soDu;
    cout << "Nhap so luong sec su dung trong thang: ";
    cin >> soSec;
    if (soDu < 0 || soSec < 0) {
        cout << "Loi: Khong chap nhan gia tri am." << endl;
        return 0;
    }
    if (soSec <= 20) {
        phiSec = soSec * 0.1;
    } else if (soSec <= 39) {
        phiSec = soSec * 0.08;
    } else if (soSec <= 59) {
        phiSec = soSec * 0.06;
    } else {
        phiSec = soSec * 0.04;
    }
    if (soDu < 400) {
        phiThem = 15.0;
    }
    tongPhi = phiCoBan + phiSec + phiThem;
    cout << "Phi co ban: " << phiCoBan << " $" << endl;
    cout << "Phi su dung sec: " << phiSec << " $" << endl;
    cout << "Phi them: " << phiThem << " $" << endl;
    cout << "Tong phi phai tra: " << tongPhi << " $" << endl;
    return 0;
}
