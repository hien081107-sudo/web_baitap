//25. Nha cung cap dich vu di dong
//Mot nha cung cap dich vu dien thoai di dong co ba goi dang ky khac nhau cho khach hang cua minh:
//Goi A: Gia 39.99$ tren 1 thang thi duoc cung cap 450 phut. So phut them la 0.45$ cho moi phut.
//Goi B: Gia 59.99$ tren 1 thang thi duoc cung cap 900 phut. So phut them la 0.40$ cho moi phut.
//Goi C: Gia 69.99$ tren 1 thang thi duoc cung cap so phut khong gioi han.
//Viet chuong trinh tinh toan hoa don hang thang cua khach hang. Chuong trinh se hoi khach hang da mua goi nao va da su dung bao nhieu phut. Sau do, no se hien thi tong so tien den han.
//Xac thuc dau vao: Dam bao nguoi dung chi chon goi A, B hoac C.

#include <iostream>
using namespace std;
int main() {
    char goi;
    int soPhut;
    double tongTien = 0.0;
    cout << "Nhap goi dang ky (A, B hoac C): ";
    cin >> goi;
    if (goi != 'A' && goi != 'B' && goi != 'C') {
        cout << "Loi: Chi duoc chon goi A, B hoac C." << endl;
        return 0;
    }
    cout << "Nhap so phut da su dung: ";
    cin >> soPhut;
    if (soPhut < 0) {
        cout << "Loi: So phut khong duoc la so am." << endl;
        return 0;
    }
    if (goi == 'A') {
        tongTien = 39.99;
        if (soPhut > 450) {
            tongTien += (soPhut - 450) * 0.45;
        }
    } else if (goi == 'B') {
        tongTien = 59.99;
        if (soPhut > 900) {
            tongTien += (soPhut - 900) * 0.40;
        }
    } else if (goi == 'C') {
        tongTien = 69.99;
    }
    cout << "Tong so tien den han: " << tongTien << " $" << endl;
    return 0;
}
