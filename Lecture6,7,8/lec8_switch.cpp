#include<iostream>
using namespace std;

int main() {
    
    /*char ch = '1';
    int num = 1;

    cout<<endl;

    switch (ch) {

        case 1: cout<< " First "<<endl;
                cout<<" frist again "<<endl;
                break;

        case '1': switch(num) {
                case 1: cout<< " value of num is  "<<num<<endl;
                break;
        }
        break;

        default: cout<<" It is Default Case" <<endl;
    }
    cout<<endl;*/


    //CALCULATOR PYAARA SA 
    int a, b;

    cout<<"enter the value of a: "<<endl;
    cin>>a;

    cout<<"enter the value of b: "<<endl;
    cin>>b;

    char op;
    cout<<"enter the operation to perform: "<<endl;
    cin>>op;


    switch(op) {
        case '+': cout<<a+b<<endl;
                    break;
        case '-':cout<<a-b<<endl;
                    break;
        case '*':cout<<a*b<<endl;
                    break;
        case '/':cout<<a/b<<endl;
                    break;
        case '%':cout<<a%b<<endl;
                    break;
        default: cout<<"Please enter a valid operation."<<endl;

    }


}

