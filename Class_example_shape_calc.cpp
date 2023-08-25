#include <iostream>
#define pi 3.14

using namespace std;

class shape {

    private:
    float edge1, edge2, radius, area, perimeter;
    int option;

    public:
    void exit();
    void menu();
    void calctriangle();
    void calcrectangle();
    void calccircle();
};

void shape::menu() {

    bool exit = true;
    while (exit){
        cout << endl;
        cout << "To exit enter '0' " << endl << "To calculate triangle values  enter '1' " << endl;
        cout << "To calculate rhombus values  enter '2' " << endl << "To calculate circle values  enter '3' " << endl;
        cout << "Choice: ";
        cin >> option;

        switch (option) {

        case 0:
            exit = false;
            break;

        case 1:
            calctriangle();
            break;
        
        case 2:
            calcrectangle();
            break;
        
        case 3:
            calccircle();
            break;
        }
    }
}

void shape::calctriangle() {

    cout << "Please enter the triangle's base lenght: ";
    cin >> edge1;
    cout << "Please enter the triangle's height lenght: ";
    cin >> edge2;
    perimeter = float(edge1 * 3);
    area = float(edge1 * edge2)/2;
    
    cout << "Triangle's perimeter: " << perimeter << endl << "Triangle's area: " << area << endl;
}

void shape::calcrectangle() {

    cout << "Please enter the rectangles first edge's lenght: ";
    cin >> edge1;
    cout << "Please enter the rectangles second edge's lenght: ";
    cin >> edge2;
    perimeter = float(edge1 * 2) + (edge2 * 2);
    area = float(edge1) * edge2;
    
    cout << "Rectangle's perimeter: " << perimeter << endl << "Rectangle's area: " << area << endl;
}

void shape::calccircle() {

    cout << "Please enter the circle's radius lenght: ";
    cin >> radius;
    perimeter = 2*pi*radius;
    area = pi*(radius*radius);
    
    cout << "Circle's perimeter: " << perimeter << endl << "Circle's area: " << area << endl;
}

void shape::exit() {
    option == 0;
}

int main() {
    shape shape1;
    shape1.menu();
}