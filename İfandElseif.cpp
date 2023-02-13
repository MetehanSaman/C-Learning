#include <iostream>

using namespace std;
int main() {
	
	int password;
	cout << "Sifre Belirleyiniz: ";
	cin >> password;

	int enteredpassword;
	cout << "Sifreyi Giriniz:";
	cin >> enteredpassword;
	if (enteredpassword == password)
	{
		cout << "Parola Dogru";
	}
	else if (enteredpassword != password)
	{
		cout << "Parola Yanlis";
	}


	


}

//Metehan Saman//