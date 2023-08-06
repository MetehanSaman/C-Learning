#include <iostream>
#include <vector> 

using namespace std;

int main() {

    vector<int>vector1;
    vector<int>vector2;

    // Vectors like arrays. You can use vectors like "vector[number]". "vectorname.at(number)" means the same as "vector[number]".
    // You can define vector with using this type "vector<variabletype(int,double,float,char,string)>name(numberofvalues, value);"
    // "vectorname.size()" returns the lenght of vector.
    // You can use "vectorname.push_back" method to add value of bottom of the vector.
    // You can use "vectorname.shrink_to_fit" method to set vector's capacity to vectors size.
    // Vectors increase their capacity as powers of 2. When capacity reach max, current capacity doubles.
    // You can use "vectorname.pop_back" method to delete value of bottom of the vector.
    // You can use "vectorname.front" method to reach the first value of vector.
    // You can use "vectorname.back" method to reach the last value of vector.
    // You can use "vectorname.swap(othervectorsname)" method to change two diffirent vectors values.


    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(5);

    vector2.push_back(6);
    vector2.push_back(7);
    vector2.push_back(8);

    for(int i = 0; i < vector1.size(); i++) {
        cout << endl << vector1.at(i) << endl; // cout << vector1[i] << endl;
    }

    cout << endl << "++++++++++++++++++++" << endl;

    for(int i = 0; i < vector2.size(); i++) {
        cout << endl << vector2.at(i) << endl; // cout << vector1[i] << endl;
    }

    cout << endl << "++++++++++++++++++++" << endl;

    cout << endl << "Size V1: " << vector1.size() << endl;
    cout << "Capacity V1: " << vector1.capacity() << endl;

    vector1.shrink_to_fit(); // This code sets vectors capacity as number of value.

    cout << endl << "++++++++++++++++++++" << endl;

    cout << endl <<"Size V1: " << vector1.size() << endl;
    cout << "Capacity V1: " << vector1.capacity() << endl;

    cout << endl << "++++++++++++++++++++" << endl;

    cout << endl <<"First Element V1: " << vector1.front() << endl;
    cout << "Last Element V1: " << vector1.back() << endl;

    cout << endl << "++++++++++++++++++++" << endl;

    cout << endl <<"First Element V2: " << vector2.front() << endl;
    cout << "Last Element V2: " << vector2.back() << endl;

    vector2.pop_back(); // This code deletes last value of vector.

    cout << endl << "++++++++++++++++++++" << endl;

    cout << endl <<"First Element V2: " << vector2.front() << endl;
    cout << "Last Element V2: " << vector2.back() << endl;

    cout << endl << "++++++++++++++++++++" << endl;

    vector1.swap(vector2); // This code used to change values of two vectors.

    // To show arrays and vectors you can use this for loop type too.
    for(auto context: vector1) {
        cout << endl << context << endl;
    }

    cout << endl << "++++++++++++++++++++" << endl;

    for(auto context: vector2) {
        cout << endl << context << endl;
    }

    cout << endl << "++++++++++++++++++++" << endl;
}