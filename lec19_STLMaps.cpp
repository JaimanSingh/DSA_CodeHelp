//data stored in the form of key values  all keys are unique. 1 key -> 1 value. 
//eg. Jaiman can point to many keys, like Lamborghini, Ferrari, etc but the key cannot point to many.
#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int,string> m;

    m[1] = "Jaiman"; //1 is key and Jaiman is the value
    m[2] = "Singh";
    m[13] = "Guliani";

    // m.insert({5,"HOB"});
    //WHY IS THIS GIVING AN ERROR?????
    cout<<"Before erase"<< endl;
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 13 "<<m.count(13)<<endl;
    cout<<"Finding -13 "<<m.count(-13)<<endl;

    m.erase(13);
    cout<<"After erase"<< endl;
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //find returns the iterator of that element  
    auto it = m.find(5);

    for (auto i=it; i!=m.end(); i++) {
        cout<<(*i).first <<endl;
    }
    //THIS LAST PART IS RETURNING NO OUTPUT!!!

}