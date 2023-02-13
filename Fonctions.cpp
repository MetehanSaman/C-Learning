#include <iostream>
#include <cmath> 
using namespace std;

float ucgenalani(float tabanalani, float yukseklik) {

	float alan = (tabanalani * yukseklik) / 2; 
	return alan;

}

float Dortgenalani(float kenar1, float kenar2) {

	float alan = kenar1 * kenar2;
	return alan;
}

float cemberalani(float cemberyaricapi) {

	float alan = 3.14 * pow(cemberyaricapi, 2);
	return alan;

}

void metekral() {

	for (int i = 1; i <= 2;i++) {
		cout << "Mete Han" << endl;
	}
}

int main() {

	while (true) {
		float islem;
		cout << endl;
		cout << "1 -> Dikdortgen Alani Hesaplatmak" << endl;
		cout << "2 -> Ucgen Alani Hesaplatmak" << endl;
		cout << "3 -> Daire Alani Hesaplatmak" << endl;
		cout << "Islem secme menusune 0 yazarsaniz uygulamayi kapatir." << endl;
		cout << "Hesaplama menusunde 0 uygulamayi secme menusune dondurur." << endl;
		cout << "Hangi Islemi Yapmak Istersiniz: ";
		cin >> islem;
		cout << endl;
		islem = round(islem);

		if (islem == 1) {
			float kenar1, kenar2, sonuc;
			cout << "1. Kenar Uzunlugunu Giriniz: ";
			cin >> kenar1;
			cout << endl;
			if (kenar1 == 0) { continue; }
			cout << "2. Kenar Uzunlugunu Giriniz: ";
			cin >> kenar2;
			cout << endl;
			if (kenar2 == 0) { continue; }
			sonuc = Dortgenalani(kenar1, kenar2);
			cout << "Diktortgen Alani: " << sonuc << endl;
		}
		else if (islem == 2) {
			float yukseklik, taban, sonuc;
			cout << "Yukseklik Uzunlugunu Giriniz: ";
			cin >> yukseklik;
			cout << endl;
			if (yukseklik == 0) { continue; }
			cout << "Taban Uzunlugunu Giriniz: ";
			cin >> taban;
			cout << endl;
			if (taban == 0) { continue; }
			sonuc = ucgenalani(taban, yukseklik);
			cout << "Ucgen Alani: " << sonuc << endl;
		}
		else if (islem == 3) {
			float yaricap, sonuc;
			cout << "Dairenin Yaricapini Giriniz: ";
			cin >> yaricap;
			cout << endl;
			if (yaricap == 0) { continue; }
			sonuc = cemberalani(yaricap);
			cout << "Dairenin Alani: " << sonuc << endl;
		}
		else if (islem == 0) {
			break;
		}
		else {
			cout << "Yanlis Giris Yaptiniz";
		}

	}

	metekral();

}
