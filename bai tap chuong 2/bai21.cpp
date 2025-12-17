//Chinh sua chuong trinh da viet trong bai tap Pizza Pi de tinh va bao cao so luong pizza can mua cho mot bua tiec. 
//Chuong trinh se yeu cau nguoi dung nhap vao so luong nguoi tham du bua tiec va duong kinh cua loai pizza se duoc dat mua. Gia su moi nguoi co the an khoang 4 mieng pizza. 
//Dua tren duong kinh pizza, chuong trinh se tinh so mieng cat co the chia ra tu mot chiec pizza, sau do tinh toan va hien thi so luong pizza can mua len man hinh.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int soNguoi;
    double duongKinh;
    const double PI = 3.14159;
    const double dienTichMoiMieng = 14.125; 
    cout << "Nhap so nguoi tham du bua tiec: ";
    cin >> soNguoi;
    cout << "Nhap duong kinh pizza (inch): ";
    cin >> duongKinh;
    double banKinh = duongKinh / 2;
    double dienTichPizza = PI * banKinh * banKinh;
    int soMiengMoiPizza = dienTichPizza / dienTichMoiMieng;
    int tongSoMiengCan = soNguoi * 4;
    int soPizzaCanMua = ceil((double)tongSoMiengCan / soMiengMoiPizza);
    cout << "So luong pizza can mua: " << soPizzaCanMua << endl;
    return 0;
}
