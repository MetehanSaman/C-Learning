#include <iostream>

using namespace std;

class Calc{
    private:
        float number1;
        float number2;
        static int count;

    public:
        void add();
        void subtract();
        void multiply();
        void divide();
        void setnumbers();
        void getnumbers();

};

int Calc::count = 0;


void Calc::add() {

    cout << this->number1 + this->number2 << endl;
    count++;
}

void Calc::subtract() {

    cout << this->number1 - this->number2 << endl;
    count++;
}

void Calc::multiply() {

    cout << this->number1 * this->number2 << endl;
    count++;
}

void Calc::divide() {

    cout << (this->number1 / this->number2) << endl;
    count++;
}


void Calc::setnumbers() {

    cout << "Please enter the number one: ";
    cin >> this->number1;
    cout << "Please enter the number two: ";
    cin >> this->number2;
    
}

void Calc::getnumbers() {

    cout << this->number1 << endl << this->number2 << endl << count << endl;
}

int main(){

    Calc operation;

    operation.setnumbers();
    operation.add();
    operation.subtract();
    operation.multiply();
    operation.divide();
    operation.getnumbers();

}