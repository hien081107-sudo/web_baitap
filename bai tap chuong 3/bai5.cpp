//5. Chi so BMI
//Chi so BMI duoc tinh theo cong thuc lay can nang (kg) chia cho binh phuong cua chieu cao (tinh theo met).
//Neu BMI lon hon 25 thi la thua can.
//Neu BMI nho hon 18.5 thi la gay.
//Neu BMI nam trong khoang tu 18.5 den 25 thi la binh thuong.
//Viet chuong trinh yeu cau nguoi dung nhap chieu cao va can nang cua ho, sau do cho biet ho dang o muc can nang nao trong ba loai tren.

#include <iostream>
using namespace std;

int main() {
    float chieuCao, canNang, BMI;
    cout << "Nhap chieu cao (met): ";
    cin >> chieuCao;
    cout << "Nhap can nang (kg): ";
    cin >> canNang;
    BMI = canNang / (chieuCao * chieuCao);
    cout << "Chi so BMI cua ban la: " << BMI << endl;
    if (BMI > 25) {
        cout << "Ban dang thua can." << endl;
    } else if (BMI < 18.5) {
        cout << "Ban dang gay." << endl;
    } else {
        cout << "Ban co can nang binh thuong." << endl;
    }
    return 0;
}
