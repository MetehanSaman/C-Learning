#include <iostream>

using namespace std;

int main() {

    FILE *file;
    int number;

    file = fopen("File_Write.txt","a");

    if(file == NULL) {
        printf("File can not opened");
    }
    else {
        for (int i = 0; i < 5; i++){
            printf("Please enter the %d. number you want to add: ",i+1);
            scanf("%d",&number);
            fprintf(file,"%d\n",number);
        }
    }
    fclose(file);
}