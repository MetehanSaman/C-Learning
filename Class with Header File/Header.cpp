#include <iostream>
#include "Header.h"

using namespace std;

void telefon::setcolor(string _color) {
	telefon::color = _color;
}
void telefon::setcamera(string _camera) {
	telefon::camera = _camera;
}
string telefon::getcolor() {
	return telefon::color;
}
string telefon::getcamera() {
	return telefon::camera;
}