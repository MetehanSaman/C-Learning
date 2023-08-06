#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int array0[10] = {0,1,2,3,4,5,6,7,8,9};
    int *pointer = array0;
    cout << pointer /*This gives the path of array0*/ << endl << &pointer /*This gives the path of pointer*/ << endl << *pointer /*This gives the first value of array0*/<< endl;

    for(int i = 0; i < 10; i++) {
        
        cout << pointer[i] << "\t";
    }

    pointer[2] = 0;
    pointer[7] = 0;

    cout << endl;

    for(int i = 0; i < 9; i++) {
        
        cout << *(pointer += 1) << "\t";
    }

    cout << endl;

    //change code to  using printf commands

    char name[] = "Mete";
    char *pointer2 = name;

    cout << pointer2 << endl << *pointer2 << endl << &pointer2 << endl;

    cout << *pointer2 << endl;
    cout << *(pointer2 + 1) << endl;

    pointer2++;

    cout << *pointer2 << endl;
    cout << pointer2 << endl;

    pointer2[2] = 'm';

    cout << pointer2;



}