#include <iostream>

using namespace std;

int main() {
    int matrix0[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int matrix1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int matrix2[4][4];

    for(int row = 0; row < 4; row++) {
        for(int column = 0; column < 4; column++) {
            matrix2[row][column] = 0;
            for(int k = 0; k < 3; k++) {
                matrix2[row][column] += matrix0[row][k] * matrix1[k][column];
            };
        };
    };

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matrix2[i][j] << "\t";
        };
        cout << endl;
    };
};