#include <iostream>

using namespace std;

template <typename T>
//"T" represents the type of variable and gives us the opportunity of setting the function and variable to same type 
T fonk(T sayi) {
    sayi = sayi*3;
    return sayi;
}

int main() {
    int a = 5;
    double b = 3.14;
    cout << fonk(a) << endl;
    cout << fonk(b);
}