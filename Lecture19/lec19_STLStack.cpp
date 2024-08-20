//Last in First Out (LIFO) concept
#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> s;

    s.push("Jaiman");
    s.push("Singh");
    s.push("Guliani");

    cout<<"Top Element ->" << s.top() <<endl;

    s.pop();
    cout<<"Top Element ->" << s.top() <<endl;

    cout<<"Size->" << s.size() <<endl;

    cout<<"Empty or not" << s.empty() << endl;
    
}

