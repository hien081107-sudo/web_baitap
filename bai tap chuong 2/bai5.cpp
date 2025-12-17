//Bai 5: Ti le nam va nu
//Viet mot chuong trinh yeu cau nguoi dung nhap vao so luong hoc sinh nam so luong hoc sinh nu cua mot lop hoc.
//Chuong trinh se tinh tong si so cua lop va hien thi ti le phan tram nam va nu ra man hinh.

//buoc 1: khai bao bien
//buoc 2: gan cac gia tri
//buoc 3: tinh tong si so cua lop
//buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main (){
	float nam, nu;
	float tonghocsinh;
	cout << "so luong hoc sinh nam la:";
	cin>>nam;
	cout << "so luong hoc sinh nu la:";
	cin>>nu;
	tonghocsinh = nam + nu;
	float tilenam, tilenu;
	tilenam = nam/tonghocsinh * 100;
	tilenu = nu/tonghocsinh *100;
	cout << " ti le phan tram nam la: "<< tilenam<<endl;
	cout << " ti le phan tram nu la: "<< tilenu<< endl;
	return 0;
}
