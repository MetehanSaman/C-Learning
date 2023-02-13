#include <iostream>

using namespace std;

int main() {

	// "break" komutu döngüyü durdurur,kod döngüden çıktıktan sonra döngü dışındaki satırdan devam eder.
	// "continue" komutu döngüyü başa döndürür, "continue" komutundan sonraki satırlar çalışmaz. 

	for (int i = 1; i <= 20; i++) {
		
		if (i == 5) {
			continue;
		}
		
		else if (i == 10) {
			break;
		}
		cout << i << endl;
	}


}

