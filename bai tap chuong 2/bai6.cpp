//Bai 6: Dieu chinh cac thanh phan
//Mot cong thuc lam banh su dung cac thanh phan sau:
//1.5 coc duong
//1 coc bo
//2.75 coc bot
//Cong thuc tren lam duoc 48 chiec banh.
//Hay viet mot chuong trinh yeu cau nguoi dung nhap vao so luong chiec banh muon lam,
//sau do chuong trinh tinh va hien thi luong cac thanh phan can dung de lam du so banh do.

// buoc 1: khai bao bien
// buoc 2: gan cac thanh phan
// buoc 3: tinh  cac thanh phan can dung de lam banh 
// buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main(){
	int sobanh;
	cout <<" nhap so banh:";
	cin>>sobanh;
	float tile;
	tile = sobanh/48;
	float duong, bo, bot;
	duong = 1.5 * tile;
	bo = 1* tile;
	bot = 2.75 * tile;
	cout << " coc duong: "<< duong<<"coc"<<endl;
	cout << " coc bo: "<< bo<<"coc"<<endl;
	cout << " coc bot: "<< bot<<"coc";
	return 0;
}
