#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector> 

using namespace std;

// strcmp(s1, s2) method used to compare s1 and s2. İf they are same this method will return "0" else, "-1" or "1" will be returned.
// strcmp(s1, s2, number) method used to compare s1 and s2 as much as the number.
// İf they are same this method will return "0" else, "-1" or "1" will be returned.

int main() {
    
    char text[] = "Mete";
    char text1[] = "Mete";
    char text2[] = "Mete Han";
    char text3[] = "Saman";

    cout << strcmp(text, text1) << endl;
    cout << strcmp(text, text2) << endl;
    cout << strncmp(text, text2,4) << endl;
    cout << strncmp(text, text2,5) << endl;
}