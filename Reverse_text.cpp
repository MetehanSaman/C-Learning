#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char *reversed_text;

void reverse_function(char *text) {
    int lenght = strlen(text) - 1;
    reversed_text = (char *)calloc(lenght,sizeof(char));

    for (int i = lenght; i >= 0; i--){
        
        reversed_text[lenght-i] = text[i];
    }
    

}

int main() {
    char text[] = "Metehan";
    reverse_function(text);
    cout << reversed_text;
}