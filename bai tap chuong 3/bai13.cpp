//13. Cau lac bo sach
//Mot hieu sach tinh diem thuong cho nguoi mua tuy theo so sach khach hang da mua nhu sau:
//0 cuon sach --> 0 diem
//1 cuon sach --> 5 diem
//2 cuon sach --> 15 diem
//3 cuon sach --> 0 diem
//tu 4 cuon sach tro len --> 60 diem
//Viet chuong trinh nhap vao so sach cua 1 khach hang va in ra so diem thuong cua ho la bao nhieu.

#include <iostream>
using namespace std;
int main() {
    int soSach;
    cout << "Nhap so sach khach hang da mua: ";
    cin >> soSach;
    if (soSach < 0) {
        cout << "So sach khong hop le." << endl;
    } else if (soSach == 0) {
        cout << "So diem thuong: 0" << endl;
    } else if (soSach == 1) {
        cout << "So diem thuong: 5" << endl;
    } else if (soSach == 2) {
        cout << "So diem thuong: 15" << endl;
    } else if (soSach == 3) {
        cout << "So diem thuong: 30" << endl;
    } else {
        cout << "So diem thuong: 60" << endl;
    }
    return 0;
}
