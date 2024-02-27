#include<iostream>
using namespace std;

int main() {

    int a=3;
    cout<<a<<endl;

    if (true) {
        // cout<<a<<endl;
        int b = 5;//no error since it is in a different scope
        cout<<b<<endl;
    }

    int b =1;
    cout<<b<<endl;

    // int b  =3;
    int i = 8;

    cout<<a<<endl;
    // cout<<b<<endl;

    for(int i=0;i<=8;i++) {
        cout<<"HI"<<endl;
    }
    
    if(1) {
        int b;
        if(1) {
            int b;
            if (1) {
                int b;
            }
        }

    }

}