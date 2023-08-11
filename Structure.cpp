#include <iostream>
#include <vector>

using namespace std;

struct student{
    int no;
    string name;
    string surname;
    double GPA;
};


int main() {

    struct student student1;
    cout << "Please enter student number: ";
    cin >> student1.no;
    cout << "Please enter student name: ";
    cin >> student1.name;
    cout << "Please enter student surname: ";
    cin >> student1.surname;
    cout << "Please enter student GPA: ";
    cin >> student1.GPA;

    cout << student1.no << "\t" << student1.name << "\t" << student1.surname << "\t" << student1.GPA << "\t";
    

}