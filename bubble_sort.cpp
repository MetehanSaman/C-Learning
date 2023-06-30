#include <iostream>

using namespace std;

int main() {

    int temp;
    int serie[] = {10,9,8,7,6,5,4,3,2,1};

    //in this for loop we run the for loop which checks the two variable the number of the serie's size times
    for(int j = 0; j < size(serie); j++) {

        //in this for loop, we check the situation of two ordinal variable and change places
        for(int i = 0; i < size(serie) - 1; i++) {
            if (serie[i] > serie[i+1]) {
                temp = serie[i];
                serie[i] = serie[i+1];
                serie[i+1] = temp;
            }
        }
    };

    for(int i = 0; i < 10; i++){
        cout << serie[i] << " ";
    };
}