//Mot quan thu thue bat dong san dua tren gia tri danh gia cua tai san bang 60 phan tram gia tri thuc cua tai san 
//Chuong trinh yeu cau nguoi dung nhap gia tri thuc cua mot phan tai san 
//Sau do chuong trinh tinh va hien thi gia tri danh gia va so tien thue bat dong san biet rang thue tai san la 75 cent cho moi 100 do la gia tri danh gia 
//Mot do la tuong duong 100 cent

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri 
// buoc 3: tinh gia tri danh gia va thue san pham
// buoc 4: in ket qua ra man tinh

#include <iostream>
using namespace std;
int main(){
	double giatrithuc, giatridanhgia, thuetaisan;
    cout << "Nhap gia tri thuc cua tai san (USD): ";
    cin >> giatrithuc;
    giatridanhgia = giatrithuc * 0.6;
    thuetaisan = (giatridanhgia / 100) * 0.75;
    cout << "Gia tri danh gia: $" << giatridanhgia << endl;
    cout << "Thue bat dong san: $" << thuetaisan << endl;
	return 0;
}
