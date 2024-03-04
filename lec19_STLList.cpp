#include<iostream>
#include<list>

using namespace std;

int main(){
    //STL list has been made using the doubly linked list (it has 2 pointers, 1 for the front and 1 for the back.)
    //direct acess, or using at() functions is not possible. Traverse karke wahan tk pahunchna parhega.

    list<int> l;

    // list<int> n(l);
    list<int> n(5,100);
    cout<<"Printing n"<<endl;
    for (int i:n) {
        cout<<i<<endl;
    }


    l.push_back(1);
    l.push_front(2);
    for (int i:l) {
        cout<<i<<endl;
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for (int i:l) {
        cout<<i<<endl;
    } 

    cout<<"size of list"<<l.size()<<endl;


}