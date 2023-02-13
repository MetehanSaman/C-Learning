#include <iostream>

using namespace std;

	// "const" oluşturulan değişkenin tipinden ("int" ya da "string" vb.) den önce yazılır,başına yazıldığı değişkenin değeri
	//progam sonuna kadar hiç değişmez.

	//"stable" da "const" gibi "const" oluşturulan değişkenin tipinden ("int" ya da "string" vb.) den önce yazılır, görevi değişkenin
	//değerini bellekte tutmaktır.

void fonc1() {
	static int sayi1 = 0; //?
	sayi1++;
	cout << sayi1 << endl;
}

int main() {
	
	fonc1();
	fonc1();
	fonc1();
	fonc1();

	const int pi = 3.14 //Bu değer bir daha değişemez program boyunca sabittir.

}
