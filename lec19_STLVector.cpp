//Vector is a dynamic array, size ghatana barhana isko aata hai.

#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> v; //default size is 0

    vector<int> a(5,1); //vector ka size would be 5 and each of the elements will be initalised as 1. fi you dont specify this, theyll be by default inialised by 0.
    cout<<"print a"<<endl;
    for (int i:a) {
        cout<<i<<" ";
    }

    vector<int> last(a); //copies/created a new vector which is the copy of the other vector which you mention.
    
    cout<<"Capacity->" << v.capacity() << endl;
    //size is ki iske andr as of now kitne elements hai, and capacity is ki ismei kitne aa sakte hai currently? kitne ki capacity isne khud generate kar rakhi hai.
    v.push_back(1);
    cout<<"Capacity->" << v.capacity() << endl;

    v.push_back(2);
    cout<<"Capacity->" << v.capacity() << endl;

    v.push_back(3) ;
    cout<<"Capacity->" << v.capacity() << endl;
    cout<<"Size->" << v.size() << endl;

    cout<<"element at 2nd index " << v.at(2)<<endl;

    cout<<"Front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

     cout<<"before pop"<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<"after pop"<<endl;
    for (int i:v) {
        cout<<i<<" ";
    }

    cout<<"before clear size" <<v.size()<<endl;
    v.clear();
    cout<<"after clear size" <<v.size()<<endl;
    cout<<"after clear capacity" <<v.capacity()<<endl;

}