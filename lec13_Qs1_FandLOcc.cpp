#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key) {

    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while (s<=e){

        if (arr[mid] == key) {
            ans = mid;
            e = mid-1;
        }

        else if (key > arr[mid]) {//right mei jao
            s = mid + 1;
        }

        else if (key < arr[mid]) {
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}
int main() {

    int even[5] = {1,2,3,3,5};
    cout << " First Occurence of 3 is at Index:" << firstOccurence(even, 5, 3);
    return 0;
}