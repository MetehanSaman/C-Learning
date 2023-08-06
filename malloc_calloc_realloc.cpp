#include <iostream>
#include <cstdlib>


//malloc: assigns memory for identified pointer/value
//calloc: assigns memory for identified pointer/value and wipes this memory
//reallock: used for enlarge or reduce memory which is provided by callock or mallock
//free: used for clean used memory


using namespace std;
 
int main() {
    int *pointer;

    pointer = (int *)calloc(20,sizeof(int));

    for(int i = 0; i < 20; i++) {
        pointer[i] = i;
    }
    for(int i = 0; i < 20; i++) {
        cout << pointer[i] << endl;
    }
    
    free(pointer);
}