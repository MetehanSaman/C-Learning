#include <iostream>
#include <vector>

using namespace std;


void updatename(vector<string>&names){
    
    for(int i = 0; i < names.size(); i++) {
        names[i][0] = toupper(names[i][0]);
    }

    for(int i = 0; i < names.size(); i++) {
        
        for (int k = 1; k < names[i].size(); k++){
            names[i][k] = tolower(names[i][k]);
        }
    }
}

int main() {

    vector<string>names = {"mETEHAN", "eMİN", "fATİH", "yUSUF"};

    for (int l = 0; l < names.size(); l++){
        cout << names.at(l) << endl;
    }
    
    updatename(names);
    
    cout << endl;

    for (int l = 0; l < names.size(); l++){
        cout << names.at(l) << endl;
    }
}