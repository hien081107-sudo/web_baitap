//18.Tinh gram chat beo
//Viet mot chuong trinh yeu cau nhap vao tong luong calo va gram chat beo trong mot loai thuc pham. Chuong trinh se hien thi phan tram calo co trong chat beo. Neu luong calo co trong chat beo it hon 30 phan tram tong luong calo cua thuc pham thi hien thi thong bao cho biet thuc pham do it chat beo. Biet:
//1 gram chat beo co 9 calo
//Luong calo trong so gram chat beo = so gram chat beo * 9
//Ty le calo co trong thuc pham = Luong calo trong so gram chat beo / Tong luong calo
//Xac nhan dau vao: Dam bao so luong calo va gram chat beo khong nho hon 0. Ngoai ra, so luong calo tu chat beo khong duoc lon hon tong so calo (So gram chat beo * 9 phai nho hon Tong luong calo). 
//Neu dieu do xay ra, hay hien thi thong bao loi cho biet rang so gram calo hoac chat beo da duoc nhap khong chinh xac.

#include <iostream>
using namespace std;
int main() {
    double tongLuongCalo;
    double gramChatBeo;
    cout << "Nhap tong luong calo: ";
    cin >> tongLuongCalo;
    cout << "Nhap so gram chat beo: ";
    cin >> gramChatBeo;
    if (tongLuongCalo < 0 || gramChatBeo < 0) {
        cout << "So gram calo hoac chat beo da duoc nhap khong chinh xac." << endl;
        return 0;
    }
    double caloTuChatBeo = gramChatBeo * 9;
    if (caloTuChatBeo > tongLuongCalo) {
        cout << "So gram calo hoac chat beo da duoc nhap khong chinh xac." << endl;
        return 0;
    }
    double tyLe = caloTuChatBeo / tongLuongCalo;
    cout << "Phan tram calo co trong chat beo: " << tyLe * 100 << "%" << endl;
    if (tyLe < 0.30) {
        cout << "Thuc pham do it chat beo." << endl;
    }
    return 0;
}
