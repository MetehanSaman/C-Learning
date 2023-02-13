#include <iostream>

using namespace std;

class telefon {
public:
	void setcolor(string _colorr);
	void setcamera(string _camera);
	string getcolor();
	string getcamera();
private:
	string color;
	string camera;

};
