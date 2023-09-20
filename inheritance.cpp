#include <iostream>

using namespace std;

class Animal{
    protected:
    string Name;
    string Type;
    int Footcount;

    public:
    Animal(string name, string type, int footcount): Name(name), Type(type), Footcount(footcount){}
    void Showgeneralinfo(){
        cout << "Name of animal: " << Name << endl << "Type of animal: " << Type << endl << "Foot number of animal: " << Footcount << endl;
    }
};

class Bird:public Animal{
    protected:
    int Weight;

    public:
    Bird(string name, string type, int footcount, int weight):Animal(name, type, footcount), Weight(weight) {}
    void Showbirdinfo(){
        cout << "Weight of bird: " << Weight << endl;
    }
};


int main(){
    Bird bird("HaşHaş", "Papağan", 2, 500);
    bird.Showgeneralinfo();
    bird.Showbirdinfo();
}