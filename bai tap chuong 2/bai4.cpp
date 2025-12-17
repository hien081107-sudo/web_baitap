//Bai 4: Luong mua trung binh
//Viet mot chuong trinh tinh toan luong mua trung binh trong 3 thang.
//Chuong trinh yeu cau nguoi dung nhap:
//Ten cua 3 thang (vi du: June, July, August)
//Luong mua cua moi thang (don vi: inches)
//Sau do chuong trinh tinh luong mua trung binh va hien thi ket qua ra man hinh theo dung mau cau.

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh trung binh 
// buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main(){
	float thang1,thang2, thang3;
	float trungbinh;
	cout << "nhap luong mua cua thang 1:" ;
	cin>> thang1;
	cout << "nhap luong mua cua thang 2:" ;
	cin>> thang2;
	cout << "nhap luong mua cua thang 3:" ;
	cin>> thang3;
	trungbinh = (thang1 + thang2 + thang3)/3;
	cout << " di?m trung binh la: " <<trungbinh;
	return 0;
}
