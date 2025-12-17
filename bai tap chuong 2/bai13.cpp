//Viet mot chuong trinh chuyen doi gia tri cua U.S. dollar sang Japanese yen va euros, luu tru he so chuyen doi trong cac hang so YEN_PER_DOLLAR va EUROS_PER_DOLLAR.
//De co duoc ti le chuyen doi duoc cap nhat, hay tim tren Internet voi tu khoa “currency exchange rate”. Neu khong tim duoc ti le chuyen doi moi nhat thi co the su dung ti le sau:
//1 dollar bang 98.93 yen.
//1 dollar bang 0.74 euros.
//Hay dinh dang ket qua o dang fixed point, voi do chinh xac 2 chu so dang sau dau phay, va luon de dau phay thap phan duoc hien thi.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    float dollar, yen, euro;
    cout << "Nhap so tien U.S. dollar: ";
    cin >> dollar;
    yen = dollar * YEN_PER_DOLLAR;
    euro = dollar * EUROS_PER_DOLLAR;
    cout << "So tien quy doi sang Japanese Yen: " << yen << endl;
    cout << "So tien quy doi sang Euro: " << euro << endl;
    return 0;
}
