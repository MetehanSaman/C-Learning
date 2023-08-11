#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// strcpy(s1,s2) method copies s2's values to s1.
// strncpy(s1,s2,number) method copies s2's values as many as the number to s1.
// strncat(s1,s2) method adds s2's to s1's end.
// strncat(s1,s2,number) method adds s2's as many as the number to s1's end.
// strset(s1, char) method changes s1's all values as entered char.
// strrev(s1) method reverses s1's values.
// strlower(s1) method changes s1's all values as lower characters.
// strupper(s1) method changes s1's all values as upper characters.

int main() {
    char text[30] = "Mete";
    char text1[30] = "Saman";

    strncpy(text1, text, 2);
    cout << text1 << endl;
    strcpy(text1, text);
    cout << text1 << endl;
    strncat(text1, text, 2);
    cout << text1 << endl;
    strcat(text1, text);
    cout << text1 << endl;
    strrev(text1);
    cout << text1 << endl;
    strset(text1,'m');
    cout << text1 << endl;
    strupr(text1);
    cout << text1 << endl;
    strlwr(text1);
    cout << text1 << endl;
}