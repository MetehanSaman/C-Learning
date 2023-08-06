#include <iostream>
#include <vector>

using namespace std;

// The "vectorname.assign(numberofvalue, value)" used for filling vector with entered values. If you use this with filled vector
// this method will re-build this vector according to endered values. This method can be used as:
// "vectorname2.assign(vectorname.begin() + 2, vectorname.end() - 3)". When you use this method, vector2 gets vector1's values
// which are choosen.
// You can take data from arrays to use in vector. For example: vectorname.assign(array, array + 5)

int main() {

    vector<int>vector1 = {1,2,3,4,5};
    vector<int>vector2;
    int array1[] = {9,8,7,6,5};

    for (int i = 0; i < vector1.size(); i++){
        cout << vector1.at(i) << "\t";
    }
    
    vector1.assign(5,2);
    vector1.push_back(5);
    vector1.push_back(7);
    vector1.push_back(9);
    vector1.push_back(6);


    cout << endl;

    for (int i = 0; i < vector1.size(); i++){
        cout << vector1.at(i) << "\t";
    }

    vector2.assign(vector1.begin()+4,vector1.begin() + 9 /*Here should be 9 instead of 8*/);

    cout << endl;

    for (int i = 0; i < vector2.size(); i++){
        cout << vector2.at(i) << "\t";
    }

    vector2.assign(array1, array1 + 5 /*Here should be 5 instead of 4*/); //In here assign command do not add the value which is last 
    // so we need to add +1 while writing the last value.


    cout << endl;

    for (int i = 0; i < vector2.size(); i++){
        cout << vector2.at(i) << "\t";
    }
}