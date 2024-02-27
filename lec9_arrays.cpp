#include<iostream>
using namespace std;

//funcitons in array.
void printArray(int arr[], int size) 
{
    cout<<" printing an array "<< endl;
    //print the array
    for (int i  = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<" printing DONE "<< endl;


}

int main() {
/*
    //declare 
    int number[15];
    
    //ACCESSING AN ARRAY
    cout<< "value at zero index is"<< number[14]<< endl;//this is the garbage value.
    // cout<< "value at zero index is"<< number[20]<< endl;

    //intialise an array
    int second[3] = {5,7,11};

    //accessing an element
    cout<< "value at second index i.e. third position is"<< second[2]<< endl;

    int third[15] = {2,7};

    int n =15;
    printArray(third, 15);

    int thirdSize = sizeof(third)/ sizeof(int);
    cout<<" size of THIRD is"<< thirdSize<<endl;
    //this is the DRAWBACK of this formula. what we have done in this array is that we have given only 2 values.
    //rest of the values have been automatically assigned as 0. now when we find the size of array, we are interested only 
    //in the values we have given, i.e. acc to us the size should be 2, but its still giving as 15. 


    //initialising all locations with zero.
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, 10);



    //can all be initalised with 1? just like zero?? [not posssible with below line]
    int fifth[10] = {1};
    n = 10;
    printArray(fifth, 10);

    // cout<<" printing the array ";
    // //print the array
    // for (int i  = 0; i<n; i++) {
    //     cout<<fifth[i];
    // }
    //no this cant be done, instead what it has done is made the first element 1 and all rest as zero.
    

   int fifthSize = sizeof(fifth)/ sizeof(int);
   cout<<" size of fifth is"<< fifthSize<<endl;

*/



    char ch[5] = { 'a','b','c','r','p'};
    cout<<ch[3];
    
    cout<<" printing an array "<< endl;
    //print the array
    for (char i  = 0; i<5; i++) {
        cout<<ch[i]<<" ";
    }
    cout<<" printing DONE "<< endl;


    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout<< endl<< "Everything is Fine."<< endl<< endl;

    return 0;
}