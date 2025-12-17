//Viet mot chuong trinh chuyen doi gia tri giua hai don vi do nhiet do la Celsius va Fahrenheit 
//Chuong trinh yeu cau nguoi dung nhap nhiet do theo don vi Celsius sau do tinh va hien thi nhiet do tuong ung theo don vi Fahrenheit 
//Theo cong thuc F = 9/5 * C + 32 Trong do F la nhiet do theo don vi Fahrenheit va C la nhiet do theo don vi Celsius

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh va hien thi nhiet do tuong ung theo don vi fahrenheit
// buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main(){
	float C, F;
    cout << "Nhap nhiet do theo don vi Celsius: ";
    cin >> C;
    F = 9.0 / 5 * C + 32;
    cout << "Nhiet do tuong ung theo don vi Fahrenheit: " << F << endl;
	return 0;
}
