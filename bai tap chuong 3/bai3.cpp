//3. Ngay phep thuat (Bat buoc)
//Ngay 10 thang 6 nam 1960 duoc viet duoi dang 6/10/60 co dac diem la thang nhan voi ngay bang nam (chi tinh 2 chu so cuoi cua nam) thi duoc coi la ngay phep thuat.
//Viet chuong trinh yeu cau nguoi dung nhap vao ngay, thang, nam (chi nhap 2 chu so cuoi cua nam). In ra ngay do co phai la ngay phep thuat khong.

#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam (2 chu so cuoi): ";
    cin >> nam;
    if (ngay * thang == nam) {
        cout << "Day la ngay phep thuat!";
    } else {
        cout << "Day KHONG phai la ngay phep thuat!";
    }
    return 0;
}
