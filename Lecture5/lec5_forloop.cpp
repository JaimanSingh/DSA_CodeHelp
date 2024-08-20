#include<iostream>
using namespace std;

int main()
{
    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"printing count form 1 to n" <<endl;

    for (int i =0; i<=n; i++)
    {
        cout<<i<<endl;
    }*/

    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"printing count form 1 to n" <<endl;
    int i = 1;
    for ( ; ; )
    {
        if(i<=n)
        {
            cout<<i<<endl;
        }
        else
        {
            break;
        }
        i++;
    }*/

    /*for (int a=0 , b=1; a>=0 && b>=1; a--,b--) //can put as many vaiables and as many conditons as you want to 
    {
        cout<<a<<" "<<b<<endl;
    }*/

    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;
    
    int sum = 0;
    for (int i = 1; i<=n; i++)
    {
        sum+=i;
    }

    cout<<sum<<endl;*/


    /*FIBBONACI SERIES*/
    /*
    int n =10;

    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i<=n;i++)
    {
        int NextNumber = a+b;
        cout<<NextNumber<<" ";

        a = b;
        b = NextNumber;
    }
    */

   //PRIME NUMBER
    /*int n;
    cout<<"enter the value of n: ";
    cin>>n;

    bool isPrime = 1;
    for (int i=2; i<n; i++)
    {
        if(n%i == 0) 
        {
            //rem=0, not a prime
            //cout<<"Not a prime number"<<endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0) {
        cout<<"Not a Prime Number"<<endl;
    }
    else {
        cout<<"Prime Number"<<endl;
    }*/

    //Continue application 
    /*for (int i=0; i<5; i++) {
        cout<<"Hi"<<endl;
        cout<<"Hello"<<endl;
        continue;

        cout<<"Reply toh karde"<<endl;
    }*/

    //OUTPUT QS 1

    // for (int i =0; i<=5; i++) {
    //     cout<<i<<" ";
    //     i++;
    // }


    //OUTPUT QS 2

    // for (int i =0; i<=5; i--) {
    //     cout<<i<<" ";
    //     i++;
    // }


    //OUTPUT QS 3

    // for (int i =0; i<=15; i+=2) {
    //     cout<<i<<" ";

    //     if (i&1) {
    //         continue;
    //     }
    //     i++;
    // }

    //OUTPUT QS 4

    // for (int i = 0; i<5; i++) {
    //     for (int j =1; j<=5; j++) {
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    //OUTPUT QS 5

    // for (int i =0; i<5; i++) {
    //     for (int j = i; j<=5; j++) {
    //         if (i+j == 10) {
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }
}