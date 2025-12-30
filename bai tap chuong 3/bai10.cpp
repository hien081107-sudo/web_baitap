//10.So ngay cua 1 thang (Bat buoc)
//Viet chuong trinh yeu cau nguoi dung nhap thang va nam, cho biet thang do co bao nhieu ngay. Su dung tieu chi sau de xac dinh nam nhuan:
//Xac dinh xem nam co chia het cho 100 hay khong. Neu do la mot nam nhuan neu va chi neu nam do chia het cho 400. Vi du, 2000 la nam nhuan nhung 2100 khong phai nam nhuan.
//Neu nam khong chia het cho 100 thi do la nam nhuan neu va chi neu nam do chia het cho 4. Vi du, nam 2008 la nam nhuan nhung nam 2009 khong phai nam nhuan.
//Duoi day va vi du chuong trinh trinh chay:
//Nhap vao 1 thang (1-12): 2 [Enter]
//Nhap vao 1 nam: 2008 [Enter]
//So ngay: 29

#include <iostream>
using namespace std;
int main() {
    int thang, nam;
    bool namNhuan = false;
    cout << "Nhap vao 1 thang (1-12): ";
    cin >> thang;
    cout << "Nhap vao 1 nam: ";
    cin >> nam;
    if (nam % 100 == 0) {
        if (nam % 400 == 0)
            namNhuan = true;
    } else {
        if (nam % 4 == 0)
            namNhuan = true;
    }
    if (thang < 1 || thang > 12) {
        cout << "Thang khong hop le." << endl;
    } else {
        switch (thang) {
            case 1: case 3: case 5: case 7:
            case 8: case 10: case 12:
                cout << "So ngay: 31";
                break;
            case 4: case 6: case 9: case 11:
                cout << "So ngay: 30";
                break;
            case 2:
                if (namNhuan)
                    cout << "So ngay: 29";
                else
                    cout << "So ngay: 28";
                break;
        }
    }
    return 0;
}
