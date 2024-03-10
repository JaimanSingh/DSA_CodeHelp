#include<iostream>
using namespace std;

int main() {

    //create a 2DArray
    int arr[3][4];

    //taking output -> row wise input
    for (int row=0; row<3; row++) {
        for (int col=0; col<4; col++) {
            cin>>arr[row][col];
        }
    }

    //taking output -> col wise input
    for (int row=0; row<4; row++) {
        for (int col=0; col<3; col++) {
            cin>>arr[col][row];
        }
    }



    //print
    for (int row=0; row<3; row++) {
        for (int col = 0; col<4; col++) {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}