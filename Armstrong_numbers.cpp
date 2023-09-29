#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int number, numeral, sum, temp, digit = 0;

    //371 is a Armstrong number

    cout << "Enter the number: ";
    cin >> number;
    temp = number;

    //This part of code calculates how many digits do the number have
    while(temp > 0) {
        temp = temp/10;
        digit++;
    }
    
    temp = number;

    // This part of code calculates the digits and adds up them
    while(temp > 0){
        numeral = temp % 10;
        temp = temp / 10;
        sum = sum + pow(numeral, digit);
    }
    
    if(sum == number){
        printf("%d is an Armstrong Number", number);
    }
    else{
        printf("%d is not an Armstrong Number", number);
    }



}