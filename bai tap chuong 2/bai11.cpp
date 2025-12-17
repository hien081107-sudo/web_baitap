// 11. chi phi o to(bat buoc)
// viet mot chuong trinh yeu cau nguoi dung nhap chi phi hang thang cho cac chi phi sau day phat sinh tu viec van hanh o to cua ho : thanh toan khoan vay, bao hiem, xang, dau, lop, va bao duong. 
//Sau do, chuong trinh se hien thi tong chi phi hang thang cua cac chi phi nay va tong chi phi hang nam cua cac chi phi nay 

// buoc 1: khai bao bien 
// buoc 2: yeu cau nguoi dung nhap cac gia tri
// buoc 3: tinh tong chi phi hang thang va tong chi phi hang nam
// buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main(){
	float thanhtoankhoanvay, baohiem, xang, dau, lop, baoduong;
	cout << " gia thanh toan khoan vay la: ";
	cin>>thanhtoankhoanvay;
	cout << " gia bao hiem la: ";
	cin>>baohiem;
	cout << " gia xang la: ";
	cin>>xang;
	cout <<" gia dau la: ";
	cin>>dau;
	cout << " gia lop la: ";
	cin>>lop;
	cout << " gia bao duong la: ";
	cin>>baoduong;
	float tongchiphihangthang, tongchiphihangnam;
	tongchiphihangthang = thanhtoankhoanvay + baohiem + xang + dau + lop + baoduong;
	tongchiphihangnam = tongchiphihangthang * 12;
	cout << " tong chi phi hang thang cua cac chi phi nay la: "<<tongchiphihangthang<<endl;
	cout <<" tong chi phi hang nam cua cac chi phi nay la: "<< tongchiphihangnam << endl;
	return 0;
}
