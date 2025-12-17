//1. So dam tren moi gallon
//Viet chuong trinh tinh muc tieu thu xang cua o to. 
//Chuong trinh yeu cau nguoi dung nhap so gallon xang ma binh xe co the chua va so dam xe co the di duoc khi do day xang. 
//Sau do chuong trinh se hien thi so dam co the di duoc tren moi gallon xang.

#include <iostream>
using namespace std;

int main(){
    double gallon, sodam, dammoigallon;
    cout << "Nhap so gallon xang cua xe: ";
    cin >> gallon;
    cout << "Nhap so dam xe co the di duoc khi do day xang: ";
    cin >> sodam;
    dammoigallon = sodam / gallon;
    cout << "So dam co the di tren moi gallon xang la: " << dammoigallon << endl;
    return 0;
}
