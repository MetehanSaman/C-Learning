#include <iostream>
#include "Header.h"
using namespace std;

int main() {

	telefon Note8;
	Note8.setcamera("48 MP");
	Note8.setcolor("Black");
	
	cout << "Camera Resolution = " << Note8.getcamera() << endl << "Color = " << Note8.getcolor();

}