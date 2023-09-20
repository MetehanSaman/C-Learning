#include <iostream>

using namespace std;

class School{

    protected:
        string Name;
        string Surname;
        int Age;

    public:
        School(){
            cout << "Please enter the name: ";
            cin >> Name;
            cout << "Please enter the surname: ";
            cin >> Surname;
            cout << "Please enter the age: ";
            cin >> Age;
        }

        void showgeneralinfo(){
            cout << "The age of the " << Name << " "<< Surname <<  " is: " << Age << endl;
        }

};

class Student: public School {

    private:
        long long int Studentnumber;
        int StudentGPA;
    
    public:
        Student(){
            cout << "Please enter the number of the student: ";
            cin >> Studentnumber;
            cout << "Please enter the GPA of the student: ";
            cin >> StudentGPA;
        }

        void showstudentinfo(){
            cout << "The number of the student is: " << Studentnumber << endl << "GPA of the student: " << StudentGPA << endl;
        }

};

class Instructor: public School {

    private:
        string Instructorsubject;
        string Instructorclass;
    
    public:
        Instructor(){
            cout << "Please enter the subject of the Instructor: ";
            cin.ignore();
            getline(cin,Instructorsubject);
            cout << "Please enter the class of the Instructor: ";
            cin.ignore();
            getline(cin,Instructorsubject);
        }

        void showInstructorinfo(){
            cout << "Subject of the Instructor is: " << Instructorsubject << endl << "Class of the Instructor: " << Instructorclass << endl;
        }

};

int main() {
    
    Student *student = new Student();
    Instructor *instructor = new Instructor();

    student->showgeneralinfo();
    student->showstudentinfo();
    instructor->showgeneralinfo();
    instructor->showInstructorinfo();



}