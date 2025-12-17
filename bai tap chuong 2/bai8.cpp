//Cong ty Yukon Widget san xuat cac vat dung nang 12.5 pound moi vat.
//Hay viet mot chuong trinh tinh toan co bao nhieu vat dung duoc xep tren mot tam bang pallet, dua tren tong trong luong cua pallet.
//Chuong trinh se hoi nguoi dung pallet nang bao nhieu va trong luong cua pallet khi cac vat dung da duoc xep chong len nhau.
//Sau do, chuong trinh se tinh toan va hien thi so luong vat dung duoc xep chong len nhau tren pallet.

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri 
// buoc 3: tinh vat dung duoc xep chong len nhau tren pallet
// buoc 4: in ra man hinh

#include <iostream>
using namespace std;
int main(){
    double palletRong, palletCoHang, trongLuongHang;
    int soVatDung;
    cout << "Nhap trong luong pallet khi chua co vat dung (pound): ";
    cin >> palletRong;
    cout << "Nhap trong luong pallet khi da co vat dung (pound): ";
    cin >> palletCoHang;
    trongLuongHang = palletCoHang - palletRong;
    soVatDung = trongLuongHang / 12.5;
    cout << "So luong vat dung tren pallet la: " << soVatDung << endl;
	return 0;
}
