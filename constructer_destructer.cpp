#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    string surname;
    int age;

    public:
    Student(string name, string surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void show() {
        cout << name << endl << surname << endl << age << endl;
    }
    
    ~Student() {
        cout << "Destructer worked";
    }
};

int main() {

    Student student1("Metehan", "Saman", 19);
    student1.show();

}