//22. Diem dong va soi
//Bang sau liet ke cac diem dong dac va soi cua mot so chat. Viet mot chuong trinh yeu cau nguoi dung nhap mot nhiet do va sau do hien thi cac chat se dong dac o nhiet do do va nhung chat se soi o nhiet do do. Vi du, neu nguoi dung nhap -20, chuong trinh se bao rang nuoc se dong bang va oxy se soi o nhiet do do.
//Chat | Nhiet do dong (do F) | Nhiet do soi (do F)
//Con Ethyl | -173 | 172
//Thuy ngan | -38 | 676
//Oxy | -362 | -306
//Nuoc | 32 | 212

#include <iostream>
using namespace std;
int main() {
    int nhietDo;
    cout << "Nhap nhiet do (do F): ";
    cin >> nhietDo;
    cout << "\nCac chat se dong dac o nhiet do nay:\n";
    if (nhietDo <= -173)
        cout << "- Con Ethyl\n";
    if (nhietDo <= -38)
        cout << "- Thuy ngan\n";
    if (nhietDo <= -362)
        cout << "- Oxy\n";
    if (nhietDo <= 32)
        cout << "- Nuoc\n";
    cout << "\nCac chat se soi o nhiet do nay:\n";
    if (nhietDo >= 172)
        cout << "- Con Ethyl\n";
    if (nhietDo >= 676)
        cout << "- Thuy ngan\n";
    if (nhietDo >= -306)
        cout << "- Oxy\n";
    if (nhietDo >= 212)
        cout << "- Nuoc\n";
    return 0;
}
