#include <iostream>

using namespace std;

int main() {

	int base, i, m, b, a, variable;
	variable = 0;
	cout << "Enter the base number of stars of pyramid: ";
	cin >> base;

	for (a = 1; a <= base; a += 2) {


		for (i = 1; i <= (base - a)  / 2; i++) {
			cout << " ";
			variable++;
		}
		for (m = 1; m <= a; m++) {
			cout << "*";
		}
		for (b = 1; b <= variable; b++) {
			cout << " ";
		}
		cout << endl;

	}
	
	
	









}