#include <iostream>
using namespace std;
//using bit maipulation
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int res= n&1;

    if(res){
        cout<<"The number is odd";
    }else{
        cout<<"The number is even";
    }
    
    
    
    return 0;
}