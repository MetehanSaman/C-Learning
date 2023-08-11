#include <iostream> 
#include <cstring>
#include <sstream>

using namespace std;

int main() {

    FILE *file;
    file = fopen("Students.txt","r");
    char name[20];
    char surname[20];
    int ID;
    char criteria[20];
    int intValue;

    printf("Please enter the name of the student: ");
    scanf("%s",criteria);

    istringstream inputstream(criteria);


    if(file == NULL) {
        printf("File is not found");
    }
    else {
        while(fscanf(file, "%s %s %d", name, surname, &ID) != EOF) {
            if(inputstream >> intValue && intValue == ID) {
                printf("%s\t%s\t%d\n", name, surname, ID);
            }
            else {
                if (strcmp(name, criteria) == 0){
                printf("%s\t%s\t%d\n", name, surname, ID);
                }
                else if (strcmp(surname, criteria) == 0){
                    printf("%s\t%s\t%d\n", name, surname, ID);
                }
            }
        }
    }
}