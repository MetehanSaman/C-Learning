#include <iostream>

using namespace std;

int main() {

	float arr[6];

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 2.5;
	arr[3] = 3;
	arr[4] = 3.5;
	arr[5];
	float dizi[] = { 1 , 1.5, 2, 2.5, 3 };
	
	cout << "Arr dizisinin 6. sayisini giriniz: ";
	cin >> arr[5];
	
	for (int i = 0; i <= 5; i++) {

		cout << arr[i] << endl;
	}

	for (int i = 0; i <= 4; i++) {

		cout << dizi[i] << endl;
	}

	// Çoklu Diziler
	// Birinci Parametre Satır Sayısını, İkinci parametre Sütun sayısını belirler.
	int dizi2[2][3] = { {1, 2, 3}, 
						{4, 5, 6} };

	for (int i = 0;i < 2; i++) {
		
		for (int j = 0; j < 3; j++) {
			cout << dizi2[i][j] << " ";
		}
		cout << endl;
	}
}
