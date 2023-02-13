#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Sayi Giriniz: ";
	float sayi;
	cin >> sayi;
	cout << endl << "Hesaplamak istediginiz ussu girin: ";
	int us;
	cin >> us;
	float hesapus = pow(sayi, us); /* pow komutu cmath kütüphanesinden bir komuttur.Sayının üssünü alamaya yarar.İlk parametre tabandaki
		sayıyı ikinci parametre üssübelirtir*/
	cout << sayi << " uzeri " << us << endl << hesapus << endl << "yapar.";

	int asyuvar = floor(sayi); /* floor komutu cmath kütüphanesinden bir komuttur.Tek parametreye sayı girilir ve sayıyı bir önceki tam
	sayıya yuvarlar */
	int yukyuvar = ceil(sayi); /* ceil math kütüphanesinden bir komuttur.Tek parametreye sayı girilir ve sayıyı bir sonraki tam sayıya
	yuvarlar*/
	int yuvar = round(sayi); /* round komutu cmath kütüphanesinden bir komuttur.Tek parametreye sayı girilir ve sayıyı kendisine en
	yakın tam sayıya yuvarlar, x.5 şeklindeki sayıyı bir sonraki tam sayıya yuvarlar.*/

	cout << "bir onceki: " << asyuvar << endl << " bir sonraki: " << yukyuvar << endl << " en yakin tam sayi: " << yuvar;

	


}
