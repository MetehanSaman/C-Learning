#include <iostream>

using namespace std;

class student {
    
private:

    string Name;
    string Surname;
    long long int Number;

public:

    void SetName(string *name) {

        Name = *name;
    }

    void SetSurname(string *surname) {
        
        Surname = *surname;
    }

    void SetNumber(long long int *number) {
        
        Number = *number;
    }

    void GetName() {

        cout << Name << endl;
    }

    void GetSurname() {
        
        cout << Surname << endl;
    }

    void GetNumber() {
        
        cout << Number << endl;
    }
};

int main(){

    student studen1;
    string name;
    string surname;
    long long int number;

    cout << "Please enter the name of student: ";
    cin >> name;

    cout << "Please enter the surname of student: ";
    cin >> surname;

    cout << "Please enter the ID of student: ";
    cin >> number;

    studen1.SetName(&name);
    studen1.SetSurname(&surname);
    studen1.SetNumber(&number);

    studen1.GetName();
    studen1.GetSurname();
    studen1.GetNumber();
}