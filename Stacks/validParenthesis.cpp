#include <iostream>
#include<stack>
using namespace std;

int main() {
    string str = "(]";
    stack<char>stack;

    for(int i = 0 ; i<str.size();i++){
        cout<<"The string is : " << str[i]<<endl;
        if(str[i]=='('){
            stack.push(')');
        }
         if(str[i]=='['){
            stack.push(']');
        }
         if(str[i]=='{'){
            stack.push('}');
        }
        
        cout<< "Pushed at Top : " << stack.top()<<endl;
        if(stack.top()==str[i]){
            cout << "Char popped : "<<str[i]<<endl;
            stack.pop();
        }
       // cout<<"Stack top after pop : " <<stack.top()<<endl;
    }
    if(stack.empty()){
        cout<<"stack is empty now"<<endl;
    }

    
    
    return 0;
}