#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

    vector<string> str =  {"5","2","C","D","+"};
    stack<char>stack;

    int sum = 0;
    for(int i = 0 ; i<str.size();i++){

        if(str[i] >= "0" && str[i] <= "9"){
            
            cout<<"Number : "<<str[i]<<endl;
            int num = stoi(str[i]);
            sum = sum + num;
            cout<<"Sum is : "<<endl;



        }
      //  cout<<str[i]  << endl;
    }
    return 0;
}