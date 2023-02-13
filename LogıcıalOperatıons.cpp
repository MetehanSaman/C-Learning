#include <iostream>

using namespace std;

int main() {
//"&&" ve "and" operatörleri "ve" anlamına gelir.
// "||" ve "or" operatörleri "ya da" anlamına gelir.
// "==" eşittir, ">=" büyük eşittir, "<=" küçük eşittir, "!=" eşit değildir demektir.
	
	int sayi1, sayi2;
	cout << "Birinci sayiyi giriniz: ";
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> sayi2;

	if (sayi1 > 0 && sayi2 > 0)
	{
		cout << "Iki sayi da pozitiftir.";
	}

	else if (sayi1 < 0 && sayi2 < 0)
	{
		cout << "Iki sayi da negatiftir.";
	}

	else if (sayi1 < 0 || sayi2 < 0)
	{
		cout << "Sayilardan birisi negatiftir.";
	}
}
