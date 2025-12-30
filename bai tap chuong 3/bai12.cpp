//12. Ban phan mem
//Mot cong ty phan mem ban goi hang san pham gia 99 do la. Muc chiet khau so luong theo bang sau:
//So luong  Chiet khau
//10 - 19  20%
//20 - 49  30%
//50 - 99  40%
//Tren 100  50%
//Viet mot chuong trinh yeu cau nhap so luong don vi ban va tinh tong chi phi mua hang.

#include <iostream>
using namespace std;
int main() {
    const double GIA_MOT_DON_VI = 99;
    int soLuong;
    double tongTien = 0;
    double chietKhau = 0;
    cout << "Nhap so luong don vi ban: ";
    cin >> soLuong;
    if (soLuong <= 0) {
        cout << "So luong phai lon hon 0." << endl;
        return 0;
    }
    if (soLuong >= 10 && soLuong <= 19) {
        chietKhau = 0.20;
    } else if (soLuong >= 20 && soLuong <= 49) {
        chietKhau = 0.30;
    } else if (soLuong >= 50 && soLuong <= 99) {
        chietKhau = 0.40;
    } else if (soLuong >= 100) {
        chietKhau = 0.50;
    }
    tongTien = soLuong * GIA_MOT_DON_VI * (1 - chietKhau);
    cout << "Tong chi phi mua hang: $" << tongTien << endl;
    return 0;
}
