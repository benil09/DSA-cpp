#include <iostream>
#include <stack>
using namespace std;

int main()
{

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(6);

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;

    bool x= s.empty();
    cout<<x<<endl;

    return 0;
}