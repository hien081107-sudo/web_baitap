//6. Khoi luong va trong luong
//Viet chuong trinh nhap vao khoi luong cua mot do vat va in ra trong luong cua no.
//Neu trong luong lon hon 100 thi thong bao vat qua nang.
//Neu trong luong nho hon 10 thi thong bao vat qua nhe.
//Biet trong luong cua mot vat duoc tinh theo cong thuc:
//Lay khoi luong (kg) nhan voi 9.8.

#include <iostream>
using namespace std;

int main() {
    float khoiLuong, trongLuong;
    cout << "Nhap khoi luong cua vat (kg): ";
    cin >> khoiLuong;
    trongLuong = khoiLuong * 9.8;
    cout << "Trong luong cua vat la: " << trongLuong << endl;
    if (trongLuong > 100) {
        cout << "Vat qua nang." << endl;
    } else if (trongLuong < 10) {
        cout << "Vat qua nhe." << endl;
    } else {
        cout << "Trong luong cua vat o muc binh thuong." << endl;
    }
    return 0;
}
