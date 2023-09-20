#include <iostream>

using namespace std;

class Bank{
    protected:
        string name_of_customer;
        double value;
        double expiry;
    public:
        Bank(string name_of_customer){
            this->name_of_customer = name_of_customer;
        }
        virtual void credit(double value, double expiry)=0;
};

class BankA:public Bank{
    public:
        BankA(string name_of_customer): Bank(name_of_customer){}
        void credit(double value, double expiry){
            this->value = value*1.2 + 200;
            cout << this->value << endl;
        }
};

class BankB:public Bank{
    public:
        BankB(string name_of_customer): Bank(name_of_customer){}
        void credit(double value, double expiry){
            this->expiry = expiry;
            this->value = value*1.2 + 1.4*this->expiry;
            cout << this->value << endl;
        }
};

int main(){
    BankA customer("Mete");
    customer.credit(1000,0);
    BankB customer0("Mete");
    customer0.credit(5000,100);
}