#include <iostream>

using namespace std;

int main() {

    int number, sum, digit;


    for(int i = 0; i < 500; i++){

        number = i;
        while (number > 0){
            digit = number%10;
            number = number/10;
            sum = sum + digit;
        }

        if(sum == 13){
            cout << i << endl;
        }

        sum = 0;
    }
}