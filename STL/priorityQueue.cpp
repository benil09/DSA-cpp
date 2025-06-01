#include <iostream>
using namespace std;

int main() {
    // case :1
   // priority_queue<int> pq;

   //case : 2
    priority_queue< int,vector<int>,greater<int> > pq;

    pq.push(2);
    pq.push(1);
    pq.push(3);
    pq.push(0);

    int n = pq.size();
    for(int i=0;i<n;i++){
        cout<<pq.top()<<" ";
        pq.pop();
    }
//    case 1 result
//    3 2 1 0

//    case 2 result
//    0 1 2 3

    return 0;
}