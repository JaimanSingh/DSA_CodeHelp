//when all the data is eneterd, we have only 2 ways to retrieve the data: 1. MaxHeap (gives out the maximum point always) 2. Minheap.(gives out the min value always.)

#include<iostream>
#include<queue>
using namespace std;


int main() {
    //max heap
    priority_queue<int> maxi; //like this, we are intialising MaxHeap always i.e. always the grreatest element will be fetched out.

    //min heap 
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"size->"<<maxi.size()<<endl;

    int n = maxi.size();
    // this code would not work if you write maxi.size() directly in the for loop.
    //this is because maxi.size phir baaar baar change hora hoga. and we dont want that. It should remain constt.
    for (int i=0; i<n; i++) {
        cout<< maxi.top() << " ";
        maxi.pop();
    }



    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m = mini.size();
    for (int i=0; i<n; i++) {
        cout<<mini.top() << " ";
        mini.pop();
    }
    cout<<endl;

    cout<<"khaali hai kya bhai?"<<mini.empty()<<endl;


}