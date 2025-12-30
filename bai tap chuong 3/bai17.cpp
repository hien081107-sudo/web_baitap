//17.Ca nhan tot nhat
//Viet chuong trinh yeu cau nhap vao ten van dong vien nhay sao, ngay thi dau va chieu cao nhay (tinh bang met) cua 3 van dong vien co thanh tich tot nhat.
//Sau do chuong trinh se hien thi danh sach cac van dong vien theo thu tu thanh tich dat duoc (chieu cao cao hon xep truoc).
//Xac thuc dau vao:
//Chi chap nhan gia tri chieu cao tu 2.0m den 5.0m.
//Neu nhap sai thi bao loi va ket thuc chuong trinh.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string ten[3], ngayThi;
    float chieuCao[3];
    cout << "Nhap ngay thi dau: ";
    getline(cin, ngayThi);
    for (int i = 0; i < 3; i++) {
        cout << "\nNhap ten van dong vien thu " << i + 1 << ": ";
        getline(cin, ten[i]);

        cout << "Nhap chieu cao nhay (met): ";
        cin >> chieuCao[i];
        if (chieuCao[i] < 2.0 || chieuCao[i] > 5.0) {
            cout << "Loi: Chieu cao phai nam trong khoang tu 2.0m den 5.0m." << endl;
            return 0;
        }
        cin.ignore(); 
    }
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (chieuCao[i] < chieuCao[j]) {
                swap(chieuCao[i], chieuCao[j]);
                swap(ten[i], ten[j]);
            }
        }
    }
    cout << "\nNgay thi dau: " << ngayThi << endl;
    cout << "Danh sach van dong vien theo thu tu thanh tich:\n";

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << ten[i]
             << " - Chieu cao: " << chieuCao[i] << " m" << endl;
    }

    return 0;
}
