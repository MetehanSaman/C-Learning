#include <iostream>
#include <vector>

using namespace std;

int main(){

    int i = 1;
    int counter = 0;
    int snumber;
    int called_number = 0;
    int attempt_number = 0;
    int array[30];

    cout << "Please enter the test number: ";
    cin >> attempt_number;

    for(int j = 0; j < attempt_number; j++){
        cout << "Please enter the number which you want to check: ";
        cin >> array[j];
    }

    for(int l = 0; l < attempt_number; l++){

        snumber = array[l];
        cout << "Snumber: " << snumber << endl;

        while(true){
            for(int k = 1; k <= 4; k++){
                counter +=k;
                called_number = called_number*10+i;
                cout << "Called Number: " << called_number << endl;
                if (called_number == snumber){
                    break;
                    }
                }

            if(called_number == snumber){
                cout << "Counter: " << counter << endl;
                i = 1;
                called_number = 0;
                break;
            }
            i++;
            called_number = 0;
        }  
    }
}