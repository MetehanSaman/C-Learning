#include <iostream>
#include <cstring>
#include <string> 

using namespace std;

int main() {
    FILE *file;
    file = fopen("Sentence.txt","a+");
    string sentence;
    char character;

    printf("Please enter the sentence: ");
    getline(cin,sentence);


    if(file == NULL) {
        printf("File is not found");
    }
    else {
        for(int i = 0; i < sentence.length(); i++){
            putc(sentence[i], file);
        }
    }


    fseek(file, 0, SEEK_SET); //This command moves file pointer to the beginning 

    if(file == NULL) {
        printf("File is not opened");
    }
    else {

        while((character = getc(file)) != EOF) {
            printf("%c",character);
        }
    }
    fclose(file);





}