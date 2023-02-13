#include <iostream>

using namespace std;

int main() {
	int x;
	cout << "Sayi miktarini giriniz : ";
	cin >> x;
	int* p = new int[x];
	for (int i = 0; i < x;  i++) {
		cout << "Sayilari Giriniz: ";
		cin >> p[i];
		cout << *(p+i) << endl;

	}

	delete[] p;
}
