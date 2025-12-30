//16. Bai tap viet bang tieng Viet khong dau
//Viet chuong trinh nhap vao ten va thoi gian hoan thanh cuoc dua cua 3 van dong vien.
//Sau do in ra xep hang cua 3 nguoi theo thu tu nhat, nhi, ba (dua tren thoi gian nho hon la ve truoc).
//Chu y:
//Neu thoi gian dua la so am thi thong bao loi va ket thuc chuong trinh

#include <iostream>
#include <string>
using namespace std;
int main() {
    string ten1, ten2, ten3;
    float tg1, tg2, tg3;
    cout << "Nhap ten van dong vien thu nhat: ";
    getline(cin, ten1);
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg1;
    cin.ignore(); // xoa bo nho dem
    cout << "Nhap ten van dong vien thu hai: ";
    getline(cin, ten2);
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg2;
    cin.ignore();
    cout << "Nhap ten van dong vien thu ba: ";
    getline(cin, ten3);
    cout << "Nhap thoi gian hoan thanh: ";
    cin >> tg3;
    // Kiem tra loi thoi gian am
    if (tg1 < 0 || tg2 < 0 || tg3 < 0) {
        cout << "Loi: Thoi gian dua khong duoc la so am." << endl;
        return 0;
    }
    cout << "\nKet qua xep hang:\n";
    if (tg1 <= tg2 && tg1 <= tg3) {
        cout << "Nhat: " << ten1 << endl;
        if (tg2 <= tg3) {
            cout << "Nhi: " << ten2 << endl;
            cout << "Ba: " << ten3 << endl;
        } else {
            cout << "Nhi: " << ten3 << endl;
            cout << "Ba: " << ten2 << endl;
        }
    } else if (tg2 <= tg1 && tg2 <= tg3) {
        cout << "Nhat: " << ten2 << endl;
        if (tg1 <= tg3) {
            cout << "Nhi: " << ten1 << endl;
            cout << "Ba: " << ten3 << endl;
        } else {
            cout << "Nhi: " << ten3 << endl;
            cout << "Ba: " << ten1 << endl;
        }
    } else {
        cout << "Nhat: " << ten3 << endl;
        if (tg1 <= tg2) {
            cout << "Nhi: " << ten1 << endl;
            cout << "Ba: " << ten2 << endl;
        } else {
            cout << "Nhi: " << ten2 << endl;
            cout << "Ba: " << ten1 << endl;
        }
    }
    return 0;
}
