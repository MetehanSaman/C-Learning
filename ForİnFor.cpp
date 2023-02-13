#include <iostream>

using namespace std;

int main() {
	
	int sayi1;
	cout << "Sayi Giriniz: ";
	cin >> sayi1;
	for (int i = 1; i <= sayi1;i++) 
	{
		
		for (int sayi2 = 1; sayi2 <= i; sayi2++) 
		{

			cout << i << " ";
		
		}

		cout << endl;

	}

	for (int i = 1; i <= sayi1; i++)
		{

		for (int sayi2 = 1; sayi2 <= i; sayi2++)
		{

			cout << sayi2 << " ";

		}

		cout << endl;

	}



}
