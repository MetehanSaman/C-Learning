#include <iostream>
#include <vector>

using namespace std;

// "vectorname.begin()" used to take the path of vectors first element. To print path you shoud use "&" and to see value
// you should use "*". These methods are called iterators.

// "vectorname.end()" used to take the path of vectors last element. Vectors have another element which states the end of the vector
// after last element so you will see the value of element which is after last element. To print path you shoud use "&" and 
//to see value you should use "*". These methods are called iterators.

// "vectorname.insert()" used to add an element of vector. You should use "vectorname.begin()" or "vectorname.end()" to give location
// of value. Usage example: vectorname.insert(vectorname.end() + 2, value)

// "vectorname.erase()" used to delete an element of vector. You should use "vectorname.begin()" or "vectorname.end()" to give
// location of value. Usage example: vectorname.erase(vectorname.end() + 2)

// To produce an iterator and assign a value you could use "vector<variabletype(int,double,float,char,string> :: iterator name"
// method.



int main() {

    vector<int>vector1 = {1,2,3,4,5};
    vector<int>::iterator iterator1;

   
    // You can use this iterator for loop method to show values of vector.
    for (iterator1 = vector1.begin(); iterator1 != vector1.end(); iterator1++){
        cout << *iterator1 << endl;
    }

    cout << endl << "+++++++++++++++++++++++++++" << endl;

    // or You can use this one.
    iterator1 = vector1.begin();
    for (iterator1; iterator1 != vector1.end(); iterator1++){
        cout << *iterator1 << endl;
    }
    
    cout << endl << "+++++++++++++++++++++++++++" << endl;

    // or You can use this one to show values reversed.
    iterator1 = vector1.end() -1;
    for (iterator1; iterator1 != vector1.begin() -1; iterator1--){
        cout << *iterator1 << endl;
    }

    cout << endl << "+++++++++++++++++++++++++++" << endl;

    iterator1 = vector1.begin();

    vector1.insert(iterator1+2,13);
    
    for (int i = 0; i < vector1.size(); i++){
        cout << vector1.at(i) << endl;
    }

    cout << endl << "+++++++++++++++++++++++++++" << endl;

    iterator1 = vector1.end();

    vector1.erase(iterator1-4);
    
    for (int i = 0; i < vector1.size(); i++){
        cout << vector1.at(i) << endl;
    }
}