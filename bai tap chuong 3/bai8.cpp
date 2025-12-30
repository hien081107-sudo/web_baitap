//8. Tron mau
//Ba mau co ban trong mot che do mau nao do la red, blue va yellow. Khi tron tung cap hai mau ta se co:
//red + blue ? purple (mau tim)
//red + yellow ? orange (mau cam)
//blue + yellow ? green (mau xanh la cay)
//Viet chuong trinh yeu cau nhap ten hai mau co ban, in ra mau ket qua khi pha tron chung. Neu nguoi dung nhap khong dung mau co ban thi thong bao loi.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string mau1, mau2;
    cout << "Nhap mau co ban thu nhat (red, blue, yellow): ";
    cin >> mau1;
    cout << "Nhap mau co ban thu hai (red, blue, yellow): ";
    cin >> mau2;
    if ((mau1 == "red" && mau2 == "blue") || (mau1 == "blue" && mau2 == "red")) {
        cout << "Mau ket qua la: purple" << endl;
    }
    else if ((mau1 == "red" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "red")) {
        cout << "Mau ket qua la: orange" << endl;
    }
    else if ((mau1 == "blue" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "blue")) {
        cout << "Mau ket qua la: green" << endl;
    }
    else {
        cout << "Loi: Ban da nhap khong dung mau co ban." << endl;
    }
    return 0;
}
