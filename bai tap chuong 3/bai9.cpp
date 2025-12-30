//6. Tro choi doi 1 do la
//Viet chuong trinh yeu cau nguoi dung nhap vao 4 so tuong ung voi so cent(1 do la bang 100 cent)
//Nickel ( bang 5 cent), Dime ( bang 10 cent), Quarter ( bang 35 cent). De khi cong lai thi duoc 1 do la bang 100 cent.
//Neu cong lai vua dung 1 do la thi thong bao nguoi choi thàng, neu khong phai thi thong bao ket qua lon hon hay nho hon 1 do la 

#include <iostream>
using namespace std;
int main() {
    int cent, nickel, dime, quarter;
    int tongTien;
    cout << "Nhap so cent (1 cent): ";
    cin >> cent;
    cout << "Nhap so nickel (5 cent): ";
    cin >> nickel;
    cout << "Nhap so dime (10 cent): ";
    cin >> dime;
    cout << "Nhap so quarter (35 cent): ";
    cin >> quarter;
    tongTien = cent * 1 + nickel * 5 + dime * 10 + quarter * 35;
    cout << "Tong so tien la: " << tongTien << " cent" << endl;
    if (tongTien == 100) {
        cout << "Chuc mung! Ban da thang tro choi." << endl;
    } else if (tongTien > 100) {
        cout << "Tong tien lon hon 1 do la." << endl;
    } else {
        cout << "Tong tien nho hon 1 do la." << endl;
    }
    return 0;
}
