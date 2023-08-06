#include <iostream>

using namespace std;

void function1(int *number1, int *number2) {

    *number1 = *number1 * 2;
    *number2 = *number2 * 4;

    cout << *number1 << "\t" << *number2 << endl;

}

void function2(int &number1, int &number2) {

    number1 = number1 * 2;
    number2 = number2 * 4;

    cout << number1 << "\t" << number2 << endl;

}

int main() {
    int number1 = 2;
    int number2 = 4;

    function1(&number1, &number2); // "*" used in function means path of value and "&" gives the path of value
    function2(number1, number2); // "&" used in function gives the path of values to function


}