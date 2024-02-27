/*
#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout<< "Inside the function" <<endl;

    //updating the array's first element 
    arr[0] = 120;

    //printing the array
    for(int i = 0; i<3; i++) {
        cout<< arr[i] << " ";
    } cout<<endl;

    cout<< "Going back to the main function" << endl;
}

int main() {
    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout<< endl<< "Printing in main function" << endl;
    for(int i = 0; i<3; i++) {
        cout<< arr[i] << " ";
    } cout<<endl;

    return 0;
}
*/


//HOMEWORK QUESTIONS-print sum of all elements in an array
#include<iostream>
using namespace std;

int main() {

    int sum = 0;
    int arr[]= {2, 4, 6, 8};
    int size = 4;

    for (int i= 0; i<size; i++) {
        sum = sum + arr[i];
    }

    cout << "sum of all elements of the array is " << sum << endl;
    return 0;
}

