//2. Vi tri ngoi tren san van dong
//Co 3 loai ghe ngoi tren mot san van dong. Voi mot mon bong, cac ghe hang A co gia 15 do la, cac ghe hang B co gia 12 do la, va cac ghe hang C co gia 9 do la. 
//Viet chuong trinh yeu cau nguoi dung nhap so luong ve cho moi hang ghe va hien thi tong so tien thu duoc tu cac ve duoc ban ra. 
//Hay dinh dang so tien o dang ky hieu fixed-point, voi do chinh xac 2 so thap phan dang sau dau phay, va luon hien thi dau phay thap phan trong moi truong hop.

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri 
// buoc 3: viet chuong trinh
// buoc 4: in ra man hinh

#include <iostream>
using namespace std;
int main() {
    double gallon;
    double soDam;
    double damMoiGallon;
    cout << "Nhap so gallon xang cua xe: ";
    cin >> gallon;
    cout << "Nhap so dam xe co the di duoc khi do day xang: ";
    cin >> soDam;
    damMoiGallon = soDam / gallon;
    cout << "So dam co the di tren moi gallon xang la: " << damMoiGallon << endl;
    return 0;
}

