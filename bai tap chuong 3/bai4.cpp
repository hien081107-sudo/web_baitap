//4. Dien tich hinh chu nhat
//Viet chuong trinh yeu cau nguoi dung nhap chieu dai va chieu rong cua 2 hinh chu nhat, sau do cho biet hinh nao co dien tich lon hon, neu bang nhau thi thong bao bang nhau.

#include <iostream>
using namespace std;

int main() {
    float dai1, rong1, dai2, rong2;
    float dt1, dt2;
    cout << "Nhap chieu dai hinh chu nhat 1: ";
    cin >> dai1;
    cout << "Nhap chieu rong hinh chu nhat 1: ";
    cin >> rong1;
    cout << "Nhap chieu dai hinh chu nhat 2: ";
    cin >> dai2;
    cout << "Nhap chieu rong hinh chu nhat 2: ";
    cin >> rong2;
    dt1 = dai1 * rong1;
    dt2 = dai2 * rong2;
    if (dt1 > dt2) {
        cout << "Hinh chu nhat 1 co dien tich lon hon.";
    } else if (dt1 < dt2) {
        cout << "Hinh chu nhat 2 co dien tich lon hon.";
    } else {
        cout << "Hai hinh chu nhat co dien tich bang nhau.";
    }
    return 0;
}
