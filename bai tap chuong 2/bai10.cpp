//10. Bao hiem bao nhieu?
//Nhieu chuyen gia tai chinh khuyen rang chu so huu bat dong san nen bao hiem ngoi nha hoac toa nha cua ho it nhat 80 phan tram so tien ma no se chi phi de thay the cau truc. 
//Viet mot chuong trinh yeu cau nguoi dung nhap chi phi thay the cua mot toa nha, sau do hien thi so tien bao hiem toi thieu ma ho nen mua cho tai san do.

// buoc 1: khai bao bien
// buoc 2: gan cac gia tri
// buoc 3: tinh so tien bao hiem toi thieu 
// buoc 4: in ket qua ra man hinh

#include <iostream>
using namespace std;
int main(){
	int chiphi;
	cout << " nhap chi phi thay the cua mot toa nha:";
	cin>>chiphi;
	float baohiemtoithieu;
	baohiemtoithieu = chiphi * 0.8;
	cout << " so tien bao hiem toi thieu ma ho nen mua cho tai san la: "<< baohiemtoithieu;
	return 0;
}
