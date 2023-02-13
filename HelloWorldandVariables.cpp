#include <iostream>

using namespace std;
int main() {
	cout << "Hello World" << endl;
	string ogrenciismi = "Mete"; // string parametresi metin ve harf tanımlamada kullanılır.Birden çok kelime ve harf tanımlayabilir.
	int ogrencinotu = 70; // int parametresi tam sayıları tanımlar.
	float pi = 3.14; // float parametresi basit ondalıklı sayıları tanımlar.
	double pi2 = 3.141592; // double parameteresi karmaşık ondalıklı sayıları tanımlamak için kullanılır.
	bool yoklama = true; // bool parametresi sadece iki değer alabilir 0 ya da 1, bu değerler true ya da false kullanılarak ifade edilir.
	char notharf = 'A'; /*char parametresine sadece bir harf ya da bir numara tanımlanabilil.ASCII kodları ile birlikte kullanılabilir.
	char parametresi sadece '' ile kullanılır.*/

	/* "*" = çarpma
	   "+" = toplama
	   "-" = çıkarma
	   "/" = bölme
	   "%" = ilk sayının ikinci sayıya bölümünden kalan (İki sayının da int olması gerekir.) 
	   Sonuçların ondalıklı sayı olması için sonucun ve en az bir değişkenin "float" tipinde olması gerekir.
	*/

	float sayi1 = 9;
	int sayi2 = 4;
	float sonuc = sayi1 / sayi2;

	cout << sayi1 << " sayisinin " << sayi2 << " sayisina bolumu: " << sonuc << endl;

	sayi1++; // bir değişkenin sonuna koyulan ++ simgesi o sayının değerini bir arttırır, x = x+1 komutu ile aynı işleve sahiptir.
	sayi2--; // bir değişkenin sonuna koyulan -- simgesi o sayının değerini bir azaltır, x = x-1 komutu ile aynı işleve sahiptir.

	int yenisayi = sayi1;
	
	sonuc = yenisayi % sayi2;

	cout << sayi1 << " sayisinin " << sayi2 << " sayisina bolumunden kalan: " << sonuc;
}

//cout komutu ekrana yazı bastırmak için kullanulır.
//endl komutu cout ile beraber kullanılır ve bir satır atlamayı ifade eder. /n ile aynı işleve sahiptir.
