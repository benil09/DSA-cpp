#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("Nil");
    q.push("kamal");
    q.push("good");

    cout << "first -> " << q.front() << endl;
    cout << "last -> " << q.back() << endl;

    q.pop();
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}