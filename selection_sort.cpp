#include <iostream>
using namespace std;

int main() {

    int serie[] = {10,8,6,4,2,9,7,5,3,1};
    int temp, number;


    for (int j = 0; j < size(serie); j++) {
        for (int i = 0; i < size(serie); i++) {
            if(serie[j] < serie[i]) {
                temp = serie[i];
                serie[i] = serie[j];
                serie[j] = temp;   
            }
        }  
    }
    
    for (int k = 0; k < size(serie); k++) {
        cout << serie[k] << " ";
    }
    
}