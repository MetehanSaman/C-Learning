#include <iostream>

using namespace std;

int main() {

    // "w" used to open a new file and write values in this file. If there is a same named file deletes context and start writing.
    // "r" used to read a file context.
    // "a" used to open file in addition mode. If there is no file, this method produces. This method does not delete contexts.
    // "w+" method opens file in writing mode. It can also read too.
    // "r+" method opens file in reading mode. It can also write too.
    // "a+" method opens file in addition moda. It can also read too.


    //fopen() method opens a file
    //fclose() method closes a file
    //putc() method adds a char to file
    //getc() method reads a char on file
    //feof() method finds the end of the file
    //fprintf() method adds a type of values to file
    //fscanf() method reads a type of values on file

    FILE *file;
    file = fopen("File_Write.txt","w");

    int number;

    if(file == NULL) {
        printf("File is not generated");
    }
    else {
        for (int i = 0; i < 5; i++){
            printf("Please enter the %d. number: ",i+1);
            scanf("%d",&number);
            fprintf(file,"%d\n",number);
        }
    }
    fclose(file);
}