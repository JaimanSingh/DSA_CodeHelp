#include<iostream>
using namespace std;

int main()
{
    //Qs1
    // int a = 9;
    // if (a == 9) {
    //     cout<< "NINEY";
    // }

    // if (a>0) {
    //     cout<<"POSITIVE";
    // }
    // else
    // {
    //     cout<<"NEGETIVE";
    // }

    //Qs2
    // int a = 2;
    // int b = a+1;

    // if ((a=3)==b) {
    //     cout<<a;
    // }
    // else{
    //     cout<<a+1;
    // }

    //Qs3
//     int a = 24;

//     if (a > 20) {
//         cout<<"Love";
//     }

//     else if (a == 24) {
//         cout<<"Lovely";
//     }

//     else{
//         cout<<"Babbar";
//     }

//     cout<<a;


//Homework Question
    char ch;
    cout<<"enter the charecter: ";
    cin>>ch;

    if (ch >= 65 && ch <=90)
    {cout<<"You entered a letter in the UPPERCASE.";
        }

    else if (ch >= 48 && ch <= 57)
    {cout<< "You entered a letter in the LowerCase.";
        }

    else if (ch >= 0 && ch <= 9)
        cout<<"You entered a number.";
    }

