#include<iostream>
using namespace std;

char getMaxOccChar(string s) {

    int arr[26] = {0};

    //create an array of count of charecters 
    for (int i = 0; i<s.length(); i++) {
        char ch = s[1];
        //lowercase 
        int number = 0;
        if (ch >= 'a' && ch <= 'z') {
            
            number = ch-'a';
        }
        //uppercase
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }

    //find maximum occuring charecter  
    int maxi = -1, ans = 0;
    for (int i = 0; i<s.length(); i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}


int main() {

    string s;
    cin>>s;
    cout << getMaxOccChar(s)<<endl;
}