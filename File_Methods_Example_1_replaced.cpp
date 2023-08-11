#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    //ofstream and ifstream modes

    // ios::out: This is the default mode and indicates that the file will be opened for writing. 
    // If the file doesn't exist, it will be created. If it does exist, the existing contents will be truncated.
    
    // ios::app: This mode stands for "append". It opens the file for writing, but if the file already exists,
    // the new data will be appended to the end of the existing data instead of overwriting it.

    //ios::trunc: This mode truncates the file if it already exists. 
    // If the file does not exist, it behaves like ios::out and creates the file for writing.

    // ios::in: This mode is used for reading from a file. If you want to read from a file, 
    // you would use std::ifstream instead of std::ofstream.

    // ios::out | ios::app: the file will be opened for writing, and any new data you write to it will be appended to the end 
    // of the existing data if the file already exists. If the file doesn't exist, it will be created.
    


    ofstream file("Students.txt", ios::out);
    string name;
    string surname;
    int ID;
    char progress;


    if(!file.is_open()) {
        printf("File is not generated");
    }
    else {
        while(1) {
            cout << "Please enter the student's name: ";
            cin >> name;
            cout << "Please enter the student's surname: ";
            cin >> surname;
            cout << "Please enter the student's ID: ";
            cin >> ID;
            file << name << "\t" << surname << "\t" << ID << endl;
            cout << "Do you want to add another student(Y/N): ";
            cin >> progress;
            if (progress == 'N' || progress == 'n') {
                break;  
            cout << endl;
            }
        }
        
        
    }
    file.close();
}