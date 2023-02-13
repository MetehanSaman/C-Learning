#include <iostream>
using namespace std;


void Değiş(int &x) {

	x = x++;
	cout << x;


}





int main() {
	
	// "&" simgesi önüne geldiği değişkenin bellekte nerede depolandığını gösterir.
	// "*" simgesi sadece pointerler için kullanılabilir. Pointer hangi değişkene bağlı ise o değişkenin değerini gösterir.
	//Pointerın önüne geldiyse poineterın bağlı olduğu değişkenin içeriğini gösterir.

	int x = 7;
	int* pointer = &x;

	cout << pointer <<endl;
	cout << &x <<endl;
	
	cout << *pointer << endl;
	cout << x << endl;
	
	/*
			Yol			Değer			İsim
			5			6,7,8			Arr
			6			1
			7			2
			8			3
			9			5				p
	*/


	int arr[] = { 1, 2, 3 };
	int* p;

	p = arr;
	cout << p << endl;
	cout << arr << endl;
	cout << *(p + 1) << "  " << p[1] << endl;
	cout <<	"x = " << x << endl;
	Değiş(x);
	
}

//Metehan Saman
