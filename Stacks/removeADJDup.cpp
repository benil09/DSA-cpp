#include <iostream>
using namespace std;
#include <stack>

int main() {
    string str = "abbaca";



    stack<char>stack;
    string str1(stack.size(),' ');



    for(int i = 0 ; i < str.size();i++){
        if(!stack.empty() && str[i]== stack.top()){
            stack.pop();
        }else{
            stack.push(str[i]);
        }
    }

    cout << stack.size()<<endl;

      int n = stack.size();
        string s(n,' ');

        while(!stack.empty()){
            s = s + stack.top();
            stack.pop();
        }
        cout<<s;
        
    cout<<stack.top()<<endl;
    stack.pop();
    cout<<stack.top()<<endl;
    stack.pop();



    
    return 0;
}