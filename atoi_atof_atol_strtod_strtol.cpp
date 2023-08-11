#include <iostream>
#include <cstdlib>

using namespace std;

//To use buttom functions, cstdlib is required.
//atoi() used to transform variables to int.
//atof() used to transform variables to float.
//atol() used to transform variables to long int.
//strtod(value, *stringvalue) used to transform strings to double. You can assign non-transformable string values to another value.
//strtol(value, *stringvalue, base) used to transform strings to double. You can assign non-transformable string values to another value.
//You should give the number base too.


int main() {
    
    char string[] = "2004.24 Metehan";
    int value;
    float value1;
    char *string2;

    value = atoi(string);
    cout << value << endl;
    value1 = atof(string);
    cout << value1 << endl;
    value1 = strtod(string, &string2);
    cout << value1 << endl;
    cout << string2 << endl;
    value1 = strtol(string, &string2, 10);
    cout << value1 << endl;
    cout << string2 << endl;


}