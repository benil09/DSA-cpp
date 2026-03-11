#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main() {
    vector<int> students = {1,1,1,0,0,1};
    vector<int> sandwiches = {1,0,0,0,1,1};
    stack<int> st;
    queue<int> q;
    int attempts=0;
    
    reverse(sandwiches.begin(),sandwiches.end());


    // cout << "STACK:  " << endl;
    for(int i = 0 ; i<sandwiches.size();i++){
       // cout<< sandwiches[i]<< " ";
        st.push(sandwiches[i]);
       // cout << st.top()<<endl;
    }
   // cout << "QUEUE: " << endl;
    for(int i = 0 ; i<sandwiches.size();i++){
        q.push(students[i]);
       // cout<< q.back()<<" , ";
    }
    cout << endl;
    while ( !q.empty() && !st.empty()  ){
        if(q.front() == st.top()){
           // cout<< "mathced "<<endl;
            st.pop();
            q.pop();
        }else{
           // cout<< "Not mathced "<<endl;
            int x = q.front();
            q.pop();
            q.push(x);
            attempts++;

            if(attempts == q.size()){
                break;
            }
            
        }
    }
    
   cout << attempts << endl;





    return 0;
}