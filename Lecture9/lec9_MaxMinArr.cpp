#include<iostream>
using namespace std;

int getMax(int num[], int n) {
    int maxi = INT_MIN;

    for (int i=0;i<n;i++) {

        maxi = max(maxi, num[i]) ;
        // if (num[i] > max) {
        //     max = num[i];
       // }
    }
    //returning the max value
    return maxi;
}

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for (int i=0;i<n;i++) {

        mini = min( mini, num[i]);
        // if (num[i] < min) {
        //     min = num[i];
        //}
    }
    //returning the max value
    return mini ; //IMP: THE RETURN STATMENT HAS TO BE OUT OF THE FOR LOOP FOR THE CODE TO FUNCTION PROPERLY.
}

int main() {

    int size;
    cin>>size;

    int num[100];

    //taking input inside the array
    for(int i=0;i<size;i++) {
        cin>>num[i];
    }

    cout<<" Maximum value is " << getMax(num, size) <<endl;
    cout<<" Minimum value is " << getMin(num, size) <<endl;
    

    return 0;
}