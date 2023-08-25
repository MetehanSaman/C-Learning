#include <iostream>
#include <string.h>  

using namespace std;

struct contact {
    char sign;
    char name[10];
    char surname[10];
    char pnumber[14];
};

struct contact contacts;
FILE *file;
int savelong, savelocation, savenumber;
char progress;

int main() {
    
    file = fopen("Contacts.txt","r+");
    if(file == NULL) file = fopen("Contacts.txt","w+");
    savelong = sizeof(contact);

    while(1){
        printf("Please enter the number of contact which you want to save: ");
        scanf("%d", &savenumber);
        contacts.sign = ' ';
        memset(contacts.name, ' ', 10);
        memset(contacts.surname, ' ', 10);
        memset(contacts.pnumber, ' ', 14);
        savelocation = (savenumber-1)*savelong;
        printf("%d", savelocation);
        fseek(file, savelocation, SEEK_SET);
        fread(&contacts, savelong, 1, file);

        if(contacts.sign != '+') {
            printf("Please enter the name of contact which you want to save: ");
            scanf("%s", contacts.name);
            printf("Please enter the surname of contact which you want to save: ");
            scanf("%s", contacts.surname);
            printf("Please enter the phone number of contact which you want to save: ");
            scanf("%s", contacts.pnumber);
            contacts.sign = '+';
            fseek(file, savelocation, SEEK_SET);
            fwrite(&contacts, savelong, 1, file);
            cout << "Do you want to add another person(Y/N): ";
            cin >> progress;
            if (progress == 'N' || progress == 'n') {
                break;
            cout << endl;
            }
        }

        else {
            printf("A phone number is already saved to this place");
        }

    }
    fclose(file);
} 