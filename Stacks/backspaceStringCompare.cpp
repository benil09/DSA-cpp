
#include <iostream>
using namespace std;
#include<stack>

int main() {

    string str1 = "y#fo##f";
    string str2 =  "y#f#o##f";

    stack <char> stack1;
    stack <char> stack2;


    for(int i = 0; i < str1.size();i++){
        if(stack1.empty()&& str1[i] =='#' ){
            continue;
        }
        if(!stack1.empty() && str1[i]=='#'){
            stack1.pop();
        }else{
            stack1.push(str1[i]);
        }

    }

    string res1;
    while(!stack1.empty()){
        res1=stack1.top()+res1;
        stack1.pop();
    }



      for(int i = 0; i < str2.size();i++){
        if(stack2.empty()&& str2[i] =='#' ){
            continue;
        }
        if(!stack2.empty() && str2[i]=='#'){
            stack2.pop();
        }else{
            stack2.push(str1[i]);
        }

    }

     string res2;
    while(!stack2.empty()){
        res2=stack2.top()+res2;
        stack2.pop();
    }

    cout << res1<<endl;
     cout << res2<<endl;


    if(res1 == res2){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }



    return 0;
}