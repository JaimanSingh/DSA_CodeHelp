#include<iostream>
#include<array>

using namespace std;

int main() {
    // int basic[3]  = {1,2,3}; -----> This is the way we generally define an array

    array <int,4> a = {1,2,3,4};  //----->This is the way we initalise arrays in STL (We have also included the lib array in the top).
    //This array is never used in Competetive Programming, reason being it is a static array.
    
    int size = a.size();
    for (int i=0; i<size; i++) {
        cout << a[i] << endl;
    }

    cout<<"Element at 2nd Index->" << a.at(2) << endl;
    cout <<"Empty or not?" << a.empty() << endl;

    cout <<"Front element? " << a.front() << endl;
    cout <<"Last element? " << a.back() << endl;

}