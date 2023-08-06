#include <iostream>

using namespace std;

int function1(int *path, int size) {
    //In this function, we take the path of first value of array and we used pointers to get other values
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(path);
        path++;
    }

    return sum;
}

int main() {

    int array[] = {1,2,3,4,5,6};
    
    printf("%d", function1(array,(sizeof(array)/sizeof(array[0]))));
    // To find arrays lenght you can use "sizeof(array)/sizeof(array[0])" code
}