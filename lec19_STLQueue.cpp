//First in First Out (FIFO) Concept

#include<iostream>
#include<queue>

using namespace std;

int main() 
{
    queue<string> q;

    q.push("Jaiman");
    q.push("Singh");
    q.push("Guliani");

    cout<<"First element"<< q.front() <<endl;

    cout<<"Size before pop" << q.size() <<endl;
    q.pop();
    cout<<"First Element"<< q.front() <<endl;

    cout<<"Size after pop" << q.size() <<endl;


}