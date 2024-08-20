#include <iostream>
using namespace std;

/*
int power()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int ans = power();
    cout << ans;
    return 0;
}
*/


/*
// 1 -> Even
// 0 -> Odd
bool isEven(int a)
{
    // odd
    if (a & 1)
    {
        return 0;
    }
    return 1; //Even 
    //no need of else because the cursor will come out of the loop only in case if statment is not satisfied.
}

int main()
{
    int num;
    cin >> num;

    if (isEven(num)) {
        cout<<" number is even"<<endl;
    } 

    else {
        cout<<" number is odd" <<endl;
    }

    return 0;
}

*/

/*
//for finding the value of nCr:

int factorial(int n) {
    int fact = 1;
    for (int i =1; i<=n;i++) {
        fact = fact*i;
    }
    return fact;
}
int nCr(int n, int r) {

    int numerator = factorial(n);
    int denomenator = factorial(r) * factorial(n-r);

    int ans = numerator/ denomenator;
    return ans;

}

int main() {
    int n, r;
    cin>>n>>r;
    cout<<"answer is "<<nCr(n,r)<<endl;

    return 0;

}
*/

/*
//function signature 
void printCounting(int n) {
    //function body
    for (int i= 1; i<=n;i++) {
        cout<< i<< endl;
    }

}

int main() {

    int n;
    cin>>n;
    //function call
    printCounting(n);

    return 0;

}
*/



/*
//1->PRIME NO.
//0->NOT A PRIME NO.
bool isPrime(int n) {

    for (int i= 2; i<n; i++)  {

        //divide ho gaya hai, not a prime no.
        if (n%i==0) {
            return 0;

        }
        return 1;
    }
}

int main() {

    int n;
    cin>>n;

    if (isPrime(n)) {
        cout<<" is a prime no. "<<endl;
    }

    else {
        cout<<" is not a prime no" << endl;
    }

    return 0;
}
*/





