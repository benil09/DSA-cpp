#include <iostream>
using namespace std;
#include <queue>

int main()
{
    queue<int> q;
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    int a = q.front();
    cout << a << endl;
    cout << "Size : " << q.size() << endl;
    cout << q.empty() << endl;
    q.pop();
    cout << "Size : " << q.size() << endl; 
    cout << q.front();
    return 0;
}