#include <iostream>

using namespace std;

class Animal{
    
    protected:
        string Type;
        string Food;
        string Name;

    public:
        Animal(string name, string type, string food): Name(name),Type(type),Food(food){}
        virtual void food() = 0;
};

class Cat:public Animal{

    public:
        Cat(string name, string type, string food): Animal(name, type, food){
        }
        void food(){
            cout << Food << endl;
        }
};

class Goat:public Animal{

    public:
        Goat(string name, string type, string food): Animal(name, type, food){
        }
        void food(){
            cout << Food << endl;
        }
};

int main(){
    Cat cat("Ali" , "orange cat", "Meat");
    cat.food();
    Goat goat("Ahmet", "old goat", "Grass");
    goat.food();
}