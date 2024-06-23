#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) { //no. of column has to be specified
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<4; j++) {
            if (arr[i][j] == target) {
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void printSum(int arr[][4], int row, int col) {
    cout<<"printing sum ->" << endl;
    for (int i = 0; i<3; i++) {
        int sum = 0;
        for (int j = 0; j<4; j++) {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }

}

int largestRowSum(int arr[][4], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i<3; i++) {
        int sum = 0;
        for (int j = 0; j<4; j++) {
            sum += arr[i][j];
        }

        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }

    }

    cout<<"The Maximum Sum is" << maxi << endl;
    return row;
}


int main() {

//     //create 2D Array
//     // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//     //int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
//    //i : row ; j : column
   int arr[3][4];
   

//    cout<<"enter the elements:"<<endl;
//     //taking input -> row wise
//     for (int i = 0; i<3; i++) {
//         for (int j = 0; j<4; j++) {
//             cin>>arr[i][j];
//         }
//     }

    //taking input -> col wise
    for (int i = 0; i<4; i++) {
        for (int j = 0; j<3; j++) {
            cin>>arr[j][i];
        }
    }

    cout<<"Printing the array"<<endl;
    //printing 
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<4; j++) {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

//     cout<<"Enter the element to search" << endl;
//     int target;
//     cin>>target;

//     if (isPresent(arr, target, 3, 4)) {
//         cout<<"Element Found";
//     }
//     else {
//           cout<<"element not found";
//         }

//     printSum(arr, 3, 4);
//     return 0;
//     //FOR PRINTING COLUMN WISE SUM, RELACE I WITH J AND VICE VERSA  

    int ansIndex = largestRowSum(arr,3,4);
    cout << "Max row is at index" << ansIndex << endl;
}

