#include <iostream>

using namespace std;

int main() {

	//Dört for döngüsü de aynı görevi yerine getiriyor.
	
	for (int i = 0; i <= 20;i++) {
		if (i % 2 == 0 ) {
			cout << i << endl;
		}
	}
	
	for (int i = 0;i <= 20;i = i + 2) {
			cout << i << endl;

	}

	for (int i = 0; i <= 20;) {
		cout << i << endl;
		i++;
		i++;
	}

	for (int i = 0; i <= 20;) {
		cout << i << endl;
		i = i + 2;
	}
}

