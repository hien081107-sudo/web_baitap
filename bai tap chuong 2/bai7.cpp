//Mot rap chieu phim duoc giu lai 20% tong doanh thu thu duoc tu viec ban ve. Phan con lai duoc chuyen cho nha phan phoi phin. 
//Viet chuong trinh tinh so tien cho phong ve va nha phan phoi. Chuong trinh can yeu cau nhao ten phim, so ve cho nguoi lon va so ve cho tre em da duoc ban.
// biet:
//gia ve cho nguoi lon la 10 do la
// gia ban cho tre em la 6 do la

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh so tien cho phong ve ca nha phan phoi 
// buoc 4: in ket qua ra man hinh

#include <iostream>
#include <string>
using namespace std;
int main (){
	string tenphim;
	cout << " nhap ten phim: ";
	getline(cin,tenphim);
	int venguoilon, vetreem;
	cout << " nhap so ve nguoi lon: ";
	cin>>venguoilon;
	cout << " nhap so ve tre em la: ";
	cin>>vetreem;
	float doanhthunguoilon, doanhthutreem;
	doanhthunguoilon = venguoilon * 10;
	doanhthutreem = vetreem * 6;
	float tongdoanhthu, tienrap, tiennhaphanphoi;
	tongdoanhthu = doanhthunguoilon + doanhthutreem;
	tienrap = tongdoanhthu * 0.2;
	tiennhaphanphoi = tongdoanhthu *0.8;
	cout <<" so tien cua rap chieu phim la: "<< tienrap<< " dola"<<endl;
	cout <<" so tien cua nha phan phoi la: "<< tiennhaphanphoi<<" dola ";
	return 0;
}
