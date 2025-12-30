//2. Chuyen doi so La Ma
//Viet chuong trinh yeu cau nguoi dung nhap vao mot so tu nhien trong khoang tu 1 den 10, su dung cau lenh switch de in ra dang so La Ma tuong ung cua so do.
//Chu y: kiem tra dau vao, khong chap nhan cac so nho hon 1 hoac lon hon 10.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so tu 1 den 10: ";
    cin >> n;
    switch (n) {
        case 1: cout << "So La Ma: I"; break;
        case 2: cout << "So La Ma: II"; break;
        case 3: cout << "So La Ma: III"; break;
        case 4: cout << "So La Ma: IV"; break;
        case 5: cout << "So La Ma: V"; break;
        case 6: cout << "So La Ma: VI"; break;
        case 7: cout << "So La Ma: VII"; break;
        case 8: cout << "So La Ma: VIII"; break;
        case 9: cout << "So La Ma: IX"; break;
        case 10: cout << "So La Ma: X"; break;
        default:
            cout << "Gia tri khong hop le! Chi nhap tu 1 den 10.";
    }
    return 0;
}
