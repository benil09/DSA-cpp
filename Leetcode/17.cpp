#include <iostream>
#include<map>
using namespace std;

 void solve(string digits , int index ,map<int,string> mapping ,string output,vector<string>& ans  ){
        //base case
        if(index >= digits.size() ){
            ans.push_back(output);
            return;
        }

        //processing
        int number = digits[index]-'0';
        string value = mapping[number];

        for(int i = 0 ; i < value.size();i++){
            output.push_back(value[i]);
            solve(digits,index+1,mapping,output,ans);
                   output.pop_back();
        }
    }
int main() {
    map<int,string> mapping= {
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
            {7,"pqrs"},
            {8,"tuv"},
            {9,"wxyz"}
        } ;

        // cout << m[2].size()<<endl;
        int index = 0;
        vector<string> ans;
        string output;
        string digits = "23";

        solve(digits,index,mapping,output,ans);
        
        for(int i = 0 ; i<ans.size();i++){
            cout << ans[i]<<" ";
        }
    
    return 0;
}