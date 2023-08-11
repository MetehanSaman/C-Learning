#include <iostream>
#include <conio.h>

using namespace std;

int main() {

    FILE *file;
    file = fopen("Students.txt","a");
    char name[20];
    char surname[20];
    int ID;
    char progress;


    if(file == NULL) {
        printf("File is not generated");
    }
    else {
        while(1) {
            cout << "Please enter the student's name: ";
            scanf("%s",name);
            cout << "Please enter the student's surname: ";
            scanf("%s",surname);
            cout << "Please enter the student's ID: ";
            scanf("%d",&ID);
            fprintf(file,"%s\t%s\t%d\n",name,surname,ID);
            cout << "Do you want to add another student(Y/N): ";
            cin >> progress;
            if (progress == 'N' || progress == 'n') {
                break;
            cout << endl;
            }
        }
        
        
    }
    fclose(file);
}

