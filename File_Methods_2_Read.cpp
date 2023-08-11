#include <iostream>

using namespace std;

int main() {

    FILE *file;
    int number;

    file = fopen("File_Write.txt","r");

    if(file == NULL) {
        printf("File can not opened");
    }
    else{
        while(fscanf(file,"%d", &number) != EOF){
            printf("%d\n",number);
        }
    }
    fclose(file);
}