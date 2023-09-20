#include <iostream>

using namespace std;

class students{

    private:
    string name;
    string surname;
    string age;
    public:
    void take_infos();
    void show_infos();
};

void students::take_infos() {
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter the surname of the student: ";
    cin >> surname;
    cout << "Enter the age of the student: ";
    cin >> age;

}

void students::show_infos() {
    cout << name << " is the name of student" << endl;
    cout << surname << " is the surname of student" << endl;
    cout << age << " is the age of student" << endl;

}

int main() {
    students student1;
    students *student = new students; // We can use pointer and 'new' to produce a new element for class.

    student->take_infos(); // While using pointer we have to use "->" sign to call functions or reach values.
    student1.take_infos();
    student->show_infos();
    student1.show_infos();

}

