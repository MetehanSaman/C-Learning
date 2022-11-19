#include <iostream>

using namespace std;

int main() {
	
	int trynumber = 1;
	string sifre1, sifre2;
	sifre1 = "0000";
	do {
		cout << "Sifreyi Giriniz: ";
		cin >> sifre2;
		trynumber++;
	} while (sifre2 != sifre1 and trynumber <= 3);

	if (trynumber > 3 ) 
	{
		cout << "Cok Fazla Deneme Yaptiniz";
	}
	else
	{
		cout << "Parola Dogru";
	}
}