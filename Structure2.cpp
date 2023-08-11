#include <iostream>
#include <limits>
#include <string>
#include <sstream>

using namespace std;


string criteria;
int intValue;

struct client{

    int customernumber;
    string customername;
    string customersurname;
    int customerbalance;
};


int main() {
    
    struct client clients[3];

    for(int i = 0; i < sizeof(clients)/sizeof(clients[0]); i++){

        cout << "Please enter the ID of " << i + 1 << "." << " customer: ";
        cin >> clients[i].customernumber;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid ID." << endl;
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input
            i = i-1;
            continue;
        }

        cout << "Please enter the name of " << i + 1 << "." << " customer: ";
        cin >> clients[i].customername;

        cout << "Please enter the surname of " << i + 1 << "." << " customer: ";
        cin >> clients[i].customersurname;

        cout << "Please enter the balance of " << i + 1 << "." << " customer: ";
        cin >> clients[i].customerbalance;
        if (cin.fail()) {
            cout << "Invalid input. Please enter valid values." << endl;
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input
            i = i-1;
            continue;
        }

        cout << endl;

    }
    
    cout << "Please enter user ID or user name to show: ";
    cin >> criteria;


    istringstream inputstream(criteria);

    for(int i = 0; i < sizeof(clients)/sizeof(clients[0]); i++){

        if (inputstream >> intValue && intValue == clients[i].customernumber) {
            cout << clients[i].customernumber <<  "\t";
            cout << clients[i].customername << "\t" << clients[i].customersurname << "\t" << clients[i].customerbalance << "\t" << endl;
        } 
        
        else if (inputstream.str() == clients[i].customername) {
            cout << clients[i].customernumber <<  "\t";
            cout << clients[i].customername << "\t" << clients[i].customersurname << "\t" << clients[i].customerbalance << "\t" << endl;
        }
    }
}

//This below part code shows the type of entered variable
//cout << typeid(decltype(clients[i].customernumber)).name() << endl;