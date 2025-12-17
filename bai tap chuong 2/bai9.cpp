//Mot tui banh co 30 chiec banh.
//Thong tin ve calorie tren tui ghi rang co 10 khau phan trong tui va moi khau phan tuong duong voi 300 calories.
//Hay viet mot chuong trinh yeu cau nguoi dung nhap so luong banh ma ho da an, sau do in ra thong bao tong so calories da tieu thu.

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh tong so calories da tieu thu
// buoc 4: in ket qua ra man hinh
#include <iostream>
using namespace std;

int main() {
    int soBanh,tongCalories;
    cout << "Nhap so luong banh da an: ";
    cin >> soBanh;
    tongCalories = soBanh * 100;
    cout << "Tong so calories da tieu thu la: " << tongCalories << " calories." << endl;
    return 0;
}
