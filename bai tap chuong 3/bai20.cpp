//20. Toc do am thanh
//Bang sau day cho thay toc do gan dung cua am thanh trong khong khi, nuoc va thep.
//Moi truong  Toc do
//Khong khi  1.100 feet/giay
//Nuoc    4.900 feet/giay
//Thep    16.400 feet/giay
//Viet chuong trinh hien thi menu cho phep nguoi dung chon: khong khi, nuoc hoac thep. Sau khi nguoi dung thuc hien lua chon, se duoc yeu cau nhap khoang cach ma song am thanh se truyen trong moi truong da chon. Sau do, chuong trinh se hien thi khoang thoi gian can thiet. (Lam tron cau tra loi den bon chu so thap phan.)
//Xac thuc dau vao: Kiem tra xem nguoi dung da chon mot trong cac lua chon co san tu menu chua. Khong chap nhan khoang cach nho hon 0.

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int luaChon;
    double khoangCach;
    double tocDo;
    double thoiGian;
    cout << "Chon moi truong truyen am thanh:" << endl;
    cout << "1. Khong khi" << endl;
    cout << "2. Nuoc" << endl;
    cout << "3. Thep" << endl;
    cout << "Nhap lua chon cua ban (1-3): ";
    cin >> luaChon;
    if (luaChon < 1 || luaChon > 3) {
        cout << "Lua chon khong hop le." << endl;
        return 0;
    }
    cout << "Nhap khoang cach song am thanh truyen (feet): ";
    cin >> khoangCach;
    if (khoangCach < 0) {
        cout << "Khoang cach khong duoc nho hon 0." << endl;
        return 0;
    }
    if (luaChon == 1) {
        tocDo = 1100;
    } else if (luaChon == 2) {
        tocDo = 4900;
    } else if (luaChon == 3) {
        tocDo = 16400;
    }

    thoiGian = khoangCach / tocDo;
    cout << fixed << setprecision(4);
    cout << "Thoi gian can thiet de truyen am thanh la: "
         << thoiGian << " giay." << endl;
    return 0;
}
