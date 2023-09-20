#include <iostream>

using namespace std;

class Animal{
    public:

    virtual void sound() {
        cout << "It is a general class, no sound" << endl;
    }

    virtual void food() {
        cout << "it is a general class, no food" << endl;
    }
};

class Cat: public Animal{
    
    void sound() {
        cout << "Cats say Miav" << endl;
    }

    void food() {
        cout << "Cats eat cat food" << endl;
    }
};

class Dog: public Animal{

    void sound() {
        cout << "Dogs say Hav Hav" << endl;
    }

    void food() {
        cout << "Dogs eat dog food" << endl;
    }
};

int main() {
    Animal *pointer[3];
    pointer[0] = new Animal;
    pointer[1] = new Cat;
    pointer[2] = new Dog;

    for(int i = 0; i < 3; i++) {
        pointer[i]->sound();
        pointer[i]->food();
    }
}