#include<iostream>
using namespace std;

int main() {
    /*
    ***
    ***
    ***
    */
    /*int n;
    cin>>n;

    int i = 1;

    while(i<=n) 
    {
        int j = 1;
        while (j <= n)
        {
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }*/





    //we wanted the next one but did this by one small change. will do this in the next session.
    /*int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = i;
        while (j<=n)
        {
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;

    }*/




    /*
    111
    222
    333*/
    /*int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i+1;

    }*/

    /*
    1234
    1234
    1234
    1234*/

    /*int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<j;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }*/

    /*
    321
    321
    321
    */
    /*int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<<n-j+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
        
    }*/

    /*
    123
    456
    789
    */
   /*int n;
   cin>>n;

   int i = 1;
   int count = 1;
   while (i<=n)
   {
    int j = 1;
    while (j<=n)
    {
        cout<<count<<" ";
        count = count + 1;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
   }*/

   /*
   *
   **
   ***
   ****
   */

  /*int n;
  cin>>n;

  int i = 1;
  while (i<=n)
  {
    int j = 1;
    while (j<=i)
    {
        cout<<"*";
        j = j+1;

    }
    cout<<endl;
    i = i+1;
  }*/

  /*
  1
  22
  333
  4444
  */

 /*int n;
 cin>>n;

 int i = 1;
 while( i <=n)
 {
    int j = 1;
    while (j<=i)
    {
        cout<<i;
        j = j+1;

    }
    cout<<endl;
    i = i+1;
 }*/


 /*
 1
 23
 456
 78910
 */
 /*int n;
   cin>>n;

   int i = 1;
   int count = 1;
   while (i<=n)
   {
    int j = 1;
    while (j<=i)
    {
        cout<<count<<" ";
        count = count + 1;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
   }*/

   /*
   1
   23
   345
   4567
   */

  /*int n;
  cin>>n;

  int i =1;
  while(i<=n)
  {
    int j =1;
    int value = i;
    while (j<=i)
    {
        cout<<value;
        j = j+1;
        value = value+1;

    }
    cout<<endl;
    i = i+1;
  }*/

 /*
 1
 21
 321
 4321
 */

/*int n;
  cin>>n;

  int i =1;
  while(i<=n)
  {
    int j =1;
    while (j<=i)
    {
        cout<<(i-j+1);
        j = j+1;

    }
    cout<<endl;
    i = i+1;
  }*/

/*
AAA
BBB
CCC
*/

/*int n;
cin>>n;

int i =1;
while (i<=n)
{
    int j =1;
    while(j<=n)
    {
        char ch = 'A' +i-1; //THIS STEP IS IMP. WITHOUT THIS IT WAS GIVING RANDOM NOS.
        cout<<ch;
        j= j +1;

    }
    cout<<endl;
    i = i +1;


}*/


/*
ABC
ABC
ABC
*/
/*int n;
cin>>n;

int i = 1;
while(i<=n)
{
    int j = 1;
    while (j<=n)
    {
        char ch = 'A'+j-1;
        cout<<ch;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}*/

/*
ABC
DEF
GHI
*/

/*int n;
cin>>n;

int i = 1;
char start = 'A';
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        cout<<start;
        start = start+1;
        j = j+1;
    }
    cout<<endl;
    i = i+1;

}*/



/*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/
/*int n;
cin>>n;
int i =1;
while (i<=n)
{
    int j = 1;
    while (j<=n)
    {
        char ch = 'A' + i + j - 2;
        cout<<ch;
        j = j +1;

    }
    cout<<endl;
    i = i+1;

}*/


/*
A
BB
CCC
*/
/*int n;
cin>>n;

int i =1;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        char ch = ('A'+i-1);
        cout<<ch;
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}*/

/*
A
BC
DEF
GHIJ
*/
/*int n;
cin>>n;

int i =1;
char count = 'A';
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout<<count;
        count = count +1;
        j = j +1;
    }
    cout<<endl;
    i = i+1;
    

}*/

/*
A
BC
CDE
DEFG
*/

/*int n;
cin>>n;
int i =1;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        char ch = 'A' + i + j - 2;
        cout<<ch;
        j = j +1;

    }
    cout<<endl;
    i = i+1;

}*/

/*
D
CD
BCD
ABCD
*/
/*int n;
cin>>n;

int i =1;
while (i<=n)
{
    int j = 1;
    char ch = 'A'+n-i;
    while (j<=i)
    {
        // char ch = 'A'+n-i;THIS GIVES WRONG ANSWER.
        cout<<ch;
        ch = ch +1;
        j = j +1;
    }
    cout<<endl;
    i = i +1;

    

}*/


/*
   *
  **
 ***
****
*/
/*int n;
cin>>n;

int i = 1;
while (i <= n)
{
    //space print karalo
    int space = n-i;
    while (space)
    {
        cout<<" ";
        space = space-1;

    }
    
    //stars print karwao
    int j= 1;
    while (j<=i)
    {
        cout<<"*";
        j = j+1;
    }
    cout<<endl;
    i = i+1;
}*/

/*
****
***
**
*
*/
/*int n;
cin>>n;

int i = 1;
while (i <= n)
{
    int j = n-i+1;
    while (j)
    {
        cout<<"*";
        j = j-1;

    }
    cout<<endl;
    i = i+1;
}*/

/*
   1
  121
 12321
1234321
*/
/*int n;
cin>>n;

int i = 1;
while (i<=n)
{
    //print karo space
    int space = n-i;
    while(space)
    {
        cout<<" ";
        space = space-1;
    }

    //print first triangle
    int j =1;
    while(j<=i)
    {
        cout<<j;
        j = j+1;
        
    }
    //print second triangle 
    int start = i-1;
    while(start)
    {
        cout<<start;
        start = start-1;
    }
    cout<<endl;
    i = i+1;

}*/

}





 