#include <iostream>

using namespace std;

int main() {
    //memcpy function copys memory from a variable to another variable
    //sizeof function identify the size of variable
    //size function returns the size of 

    double dizi[] = {55.2,1,6,63.83};
    double dizi2[size(dizi)];
    cout << size(dizi) << endl;

    memcpy(dizi2, dizi, sizeof(dizi));

    for(int i = 0; i < 4; i++) {
        cout << dizi2[i] << endl;
    };
}