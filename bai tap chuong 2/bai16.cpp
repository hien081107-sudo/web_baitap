//Quan Madison cung cap khoan mien thue chu nha 5000 do la cho cong dan cao tuoi 
//Chuong trinh yeu cau nguoi dung nhap gia tri thuc cua mot phan tai san va thue suat hien hanh cho moi 100 do la gia tri danh gia 
//Gia tri danh gia cua tai san bang 60 phan tram gia tri thuc 
//Sau khi tru khoan mien thue 5000 do la chuong trinh tinh thue bat dong san hang nam ma cong dan cao tuoi phai tra va tinh so tien thue phai tra moi quy biet rang thue duoc phep chia thanh bon lan bang nhau

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh gia tri danh gia, gia tri chiu thue sau mien giam, thue bat dong san hang nam, thue bat dong san hang quy
// buoc 4: in ket qua ra man hinh 

#include <iostream>
using namespace std;
int main(){

    double giatrithuc, thuesuat, giatridanhgia, giatrichiuthue, thuehangnam, thuehangquy;
    cout << "Nhap gia tri thuc cua tai san : ";
    cin >> giatrithuc;
    cout << "Nhap thue suat cho moi 100 USD gia tri danh gia: ";
    cin >> thuesuat;
    giatridanhgia = giatrithuc * 0.6;
    giatrichiuthue = giatridanhgia - 5000;
    if (giatrichiuthue < 0) giatrichiuthue = 0;
    thuehangnam = (giatrichiuthue / 100) * thuesuat;
    thuehangquy = thuehangnam / 4;
    cout << "Gia tri danh gia: " << giatridanhgia << endl;
    cout << "Gia tri chiu thue sau mien giam: " << giatrichiuthue << endl;
    cout << "Thue bat dong san hang nam: " << thuehangnam << endl;
    cout << "Thue bat dong san hang quy: " << thuehangquy << endl;
	return 0;
}
