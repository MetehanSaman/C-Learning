#include <iostream>

using namespace std;

int main() {
	
	int trynumber = 1;
	string sifre1, sifre2;
	sifre1 = "0000";
	do {
		cout << "Sifreyi Giriniz: ";
		cin >> sifre2;
		if (sifre2 != sifre1 and trynumber < 3) {
			cout << "Yanlis parola girdiniz" << endl;
		}
		trynumber++;
	} while (sifre2 != sifre1 and trynumber <= 3);

	if (trynumber > 4 ) 
	{
		cout << "Cok Fazla Hatali Deneme Yaptiniz";
	}
	else
	{
		cout << "Parola Dogru";
	}
}
