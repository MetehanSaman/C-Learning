#include <iostream>

using namespace std;

int main(){

    int number, digits, sum, first_number;

    printf("Please enter a number: ");
    scanf("%d", &number);
    first_number = number;

    while (number > 0){
        digits = number % 10;
        number = number / 10;
        sum = sum + digits;
    }
    
    printf("The sum of digits of %d is: %d",first_number,sum);

}