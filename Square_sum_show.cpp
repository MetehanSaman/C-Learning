#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int number;
    int stop = 0;

    cout << "Please enter a number: ";
    cin >> number;


    for (int i = 0; i < number/2 && stop == 0; i++){
        for (int j = 0; j < number/2; j++){
            if(pow(i,2) + pow(j,2) == number){
                printf("The sum of square of %d and %d is equal to %d",i,j,number);
                stop = 1;
            }
        }
    }

    if(stop == 0) printf("The %d is not the sum of squares of any numbers",number);
    
}