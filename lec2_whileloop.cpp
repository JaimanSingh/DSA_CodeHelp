#include<iostream>
using namespace std;

int main()
{
    //printing nos from 1 to n.
    /*int n;
    cin>>n;

    int i = 1;
    while (i<=n) {
        cout<<i<<" ";
        i = i+1;
    }*/

    //printing sum of nos from 1 to n.
    /*int n;
    cin >> n;
     int i = 1;
     int sum = 0;

     while (i<=n) {
        sum = sum + i;
        i = i + 1;
     }
    cout<< "value of sum is : "<< sum << endl;*/

    //sum of all even nos. from 1 to n 
    /*int n;
    cin>>n;
    int i = 2;
    int sum = 0;

    while (i<=n) 
    {
        sum = sum + i;
        i = i+2;
    }
    cout<<"sum of all even nos. from i to n is: "<<sum<<endl;*/

    //Farenheit to Celcius table using the formula F= 9/5C +32 --> C = (5/9F)/1.8
    /*float f, c;
    cout<<"enter the temperature in celcius"<<endl;
    cin>>c;
    f = (c*9.0)/5.0 + 32;

    cout<<"the temp in celcius is:"<<c<<endl;*/

    //prime or not
    int n;
    cin>>n;

    int i = 2;

    while (i<n) {
        //divide hogya, not prime
        if(n%i == 0) {
            cout<< "NOT PRIME" << i <<endl;
        }
        else {
            cout<<"PRIME" << i<<endl;
        }
        i = i+1;
    }
    

}