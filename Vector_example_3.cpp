#include <iostream>
#include <vector>

using namespace std;

void update(vector<int>&numbers) {
    
    for (int i = 0; i < numbers.size(); i++){
        numbers.at(i) = numbers.at(i) + 1;
    }
}

int main() {

    vector<int> numbers = {0,1,2,3,4,5,6,7,8,9};
    update(numbers);

    for (int number: numbers){
        cout << number << endl;
    }
    
}