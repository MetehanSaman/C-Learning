#include <iostream>
using namespace std;

void fonk() {
	cout << "Metehan" << endl;
}

void fonk(string x) {
	cout << x << endl;
}

void fonk(int x) {

	cout << x << endl;
}


int main() {

	fonk();
	fonk("Ahmet");
	fonk(3);


}

