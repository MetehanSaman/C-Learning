#include <iostream>

using namespace std;

int main() {
    int matrix0[2][3] = {1,2,3,4,5,6};
    int matrix1[3][2] = {0,0,0,0,0,0};

    for(int row = 0; row < 2; row++) {
        for(int column = 0; column < 3;column++) {
            matrix1[column][row] = matrix0[row][column];
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }





}