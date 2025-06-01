#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("nil");
    s.push("kamal");
    s.push("priye");
    s.push("darshi");

    cout << "frist element : " << s.top() << endl;
    s.pop();
    cout << "frist element : " << s.top() << endl;
    s.pop();
    cout << "frist element : " << s.top() << endl;
    cout << "size : " << s.size () << endl;


    return 0;
}