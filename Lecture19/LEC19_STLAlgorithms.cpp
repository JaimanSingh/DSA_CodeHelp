#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 5"<<binary_search(v.begin(), v.end(), 5)<<endl;

    cout<<"Lower bound" << lower_bound(v.begin(), v.end(), 6)-v.begin() <<endl;
    cout<<"upper bound" << upper_bound(v.begin(), v.end(), 6)-v.begin() <<endl;

    int a = 3;
    int b = 5;
    cout<<"Maximum of the 2 is "<<max(a, b);
    cout<<"Minimum of the 2 is "<<min(a, b);
    swap(a, b);
    cout<<"a"<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"Reversed String" <<abcd<< endl;


    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate"<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }    


    //if anyone asks you how is this sort working, then say that it is based on Intro Sort i.e. its a mix of 3 sorts- Quick, Heap, & Insertion sort. 
    sort(v.begin(), v.end());
    cout<<"After sorting"<<endl;
    for (int i:v) {
        cout<<i<<" ";
    } 

}