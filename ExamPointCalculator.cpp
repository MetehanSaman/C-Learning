#include <iostream>

using namespace std;

int main() {
	/* "cin" komutu kullanıcıdan veri almak için kullanılır. Kullanımı "cout" koduna benzer fakat << yerine >> ile kullanılır.*/
	int deger;
	cout << "Vizeden kac aldiginizi giriniz: ";
	float vize;
	cin >> vize;
	cout << endl;
	cout << "Finalden kac aldiginizi giriniz: ";
	int final;
	cin >> final;
	float notort = (vize * 40 / 100) + (final * 60 / 100);
	cout << "Not Ortalamaniz: " << notort;

}
