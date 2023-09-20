#include <iostream>

using namespace std;

class Worker{
    protected:
    string name;
    string surname;
    string TC_number;
    double wage;

    public:
        Worker(){

        }
        Worker(string name, double wage) {
            this->name = name;
            this->wage = wage;
            
        }
        Worker(string name, string surname, string TC_number, double wage) {
            this->name = name;
            this->surname = surname;
            this->TC_number = TC_number;
            this->wage = wage;
        }
        virtual void UpdateWage(){
            wage = wage * 1.3;
            cout << wage << endl;
        }
};

class Engineer: public Worker{
    protected:
        string depatment;
    public:
        Engineer(string name, double wage){
            this->name = name;
            this->wage = wage; 
        }
    void UpdateWage(){
            wage = wage * 1.8 + 100;
            cout << wage << endl;
        }
};

class Assistant: public Worker{
    protected:
        string depatment;
    public:
        Assistant(string name, double wage):Worker(name, wage){
        }
    
    void UpdateWage(){
        wage = wage * 1.3 + 50;
        cout << wage << endl;
    }
};


int main() {
    Worker *ptr[3];
    ptr[0] = new Worker("Ahmet", 10000);
    ptr[1] = new Engineer("Mehmet", 15000);
    ptr[2] = new Assistant("Ayşe", 12000);

    ptr[0]->UpdateWage();
    ptr[1]->UpdateWage();
    ptr[2]->UpdateWage();
}