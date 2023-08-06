#include <iostream>
#include <stdio.h>

using namespace std;

char *function(char *text, char character) {

    while(*text != '\0') {

        if(*text == character) {
            return text;
        }
        text++;
    }
}

int main() {

    char text[] = "metehan";
    char character = 'e';
    char *value = function(text,character);

    if (value)
    {
        printf("Searched character located in: %x", value);
    }
    else {
        printf("Searched character is not exist in text");
    }
    

}