#include <iostream>
using namespace std;
void Reverse(int s , int e , string &str){

    //base case 
    if(s>e) return ;

    //processing 
    swap(str[s],str[e]);
    s++;
    e--;

    //Recursive call
    Reverse(s,e,str);
}
int main() {
    string str = "nil";
    int s = 0;
    int e = str.length() -1;
    Reverse(s,e,str);
    cout<<str;
    return 0;
}