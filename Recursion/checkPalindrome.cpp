#include <iostream>
using namespace std;

bool checkPlaindrome(string str , int s , int e){
    //base case
    if(s>e) return true;

    //processing
    if(str[s] != str[e]){
        return false;
    }else{
        //Recursive call
       return checkPlaindrome(str , s+1 , e-1 );
    }

}
int main() {
    string str = "madam";
    int s = 0 , e = str.length()-1;
    bool ans = checkPlaindrome(str , s ,e);

    if (ans){
        cout << " YES ! palindrome ";
    }else{
        cout << " NO ! Not a Palindrome ";
    }
    return 0;
}