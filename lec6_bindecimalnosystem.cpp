#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;


//DECIMAL TO BINARY FOR POSITIVE NUMBERS
    /*int answer = 0;
    int i = 0;
    while (n!=0) {

        int bit = n&1;

        answer = (bit * pow(10,i)) + answer;

        n= n>>1;
        i++;

    }

    cout<<" Answer is "<<answer << endl;

}*/


//BUNARY TON DEICMAL 
    int i = 0, ans = 0;

    while (n!=0) {
        // int bit = n&1;
        int digit = n%10;

        if  (digit == 1) {
            ans  = ans + pow(2,i);
        }

        n = n/10;
        i++;
    }
    cout<< ans<< endl;

}