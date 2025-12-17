//Viet chuong trình yêu cau nhap diem cua 5 bài kiem tra.
// Chuong trình thuc hien tính toán giá tri trung bình cua 5 bài kiem tra này sau dó hien thi lên màn hình.
// So duoc hien thi phai duoc dinh dang theo kí hieu fixed-point, xoi do chính xác là 1 dong sau dau phay.

//Buoc 1: Khai báo 5 bien Diem, bien TrungBinh.
//Buoc 2: Nhap vào 5 dau diem cua 5 nam bien Diem.
//Buoc 3: Tính di?m trung bình 
//		TrungBinh = (Diem1 + Diem2 + Diem3 + Diem4 + Diem 5)/5;
//Buoc 4: In ket qua TrungBinh ra màn hình.

#include <iostream>
using namespace std;
int main(){
	// buoc 1 khai bao 5 bien diem, bien trung binh
	float diem1, diem2, diem3, diem4, diem5;
	float trungbinh;
	// buoc 2: nhap vao 5 dau diem cua 5 bien diem
	cout << " nhap diem 1: ";
	cin>>diem1;
	cout << " nhap diem 2: ";
	cin >> diem2;
	cout << " nhap diem 3: ";
	cin >> diem3;
	cout << " nhap diem 4: ";
	cin >> diem4;
	cout << " nhap diem 5:";
	cin >> diem5;
	// buoc 3: tinh diem trung binh
	trungbinh =  (diem1 + diem2 + diem3 + diem4 + diem5)/5;
	// buoc 4: in ket qua ra man hinh
	cout <<" diem trung binh la: "<< trungbinh;
	return 0;
}
