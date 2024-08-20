#include<iostream>
using namespace std;
int main()
{
    
    // int *p; //pointer to int is created, and is pointing to some garbage addresss.. BAD PRACTICE
    // int  *p = 0;
    // cout << *p <<endl;
/*
    int i = 5;
    //int*p = &i;
    int *p = 0;
    p = &i;
    //both formats are same and will give same value of address.
    cout << p << endl;
    cout << *p << endl;
*/
    int num = 5;
    int a = num;
    cout << "a Before"<< num << endl;
    a++;
    cout << "a after"<< num << endl;

    int *p = &num;
    cout << "Before"<< num << endl;
    (*p)++;
    cout << "After"<< num << endl;

//copying a pointer 
    int *q = p;
    cout << p << "-" << q << endl;
    cout << *p << "-" << *q << endl;

    //Important Concept
    int i  =3;
    int *t = &i;
    cout << (*t)++ << endl; //works without brckets too, but we will practice writing a good code, so put brakcets.
    *t = *t + 1;
    //t = t+1;
    cout << *t <<endl;
    cout << "before t" <<t <<endl;
    t = t+1;
    cout << 'after t' << t << endl;



    return 0;
}