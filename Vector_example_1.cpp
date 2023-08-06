#include <iostream>
#include <vector>

using namespace std;

void sortfunction(vector<int>&numbers) {
    vector<int>temp;

    for (int j = 0; j < numbers.size(); j++){
        for (int i = 0; i < numbers.size() - 1; i++){
            if (numbers.at(i) > numbers.at(i + 1)){
                temp.push_back(numbers.at(i));
                numbers.at(i) = numbers.at(i+1);
                numbers.at(i+1) = temp.back();
            }
        }
    }
}

int main() {

    vector<int>numbers = {9,8,7,11,4,3,1,0,10,5,100,-1,-5};
    
    sortfunction(numbers);

    for (int i = 0; i < numbers.size(); i++){
        cout << numbers.at(i) << "\t";
    }
}