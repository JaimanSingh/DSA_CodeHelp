#include<iostream>
using namespace std;

void update(int **p2) {
    // p2 = p2 + 1;
    //kuch change hoga? -> NO

    // *p2 = *p2 + 1;
    //kuch change hoga? -> YES

    **p2 = **p2 + 1;
    //kuch change hoga? -> YES

}

int main()
{
    /*
    int i = 5;
    int* p = &i;
    int** p2 = &p;
    

    cout << "printing p " << p << endl;
    cout << "adress of p " <<&p << endl;

    cout << *p2 << endl; 
    // same as printing p. either print p or print the content at the adress p2 is storing.

    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    // cout << &&i << endl; not working 
    cout << &p << endl;
    cout << p2 << endl;



    cout << endl << endl;
    cout << "Before" << i << endl;
    cout << "Before" << p << endl;
    cout << "Before" << p2 << endl;
    update(p2);
    cout << "After" << i << endl;
    cout << "After" << p << endl;
    cout << "After" << p2 << endl;
*/

    return 0;
}