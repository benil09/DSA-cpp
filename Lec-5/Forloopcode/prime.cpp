#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n:";
    cin >> n;
    bool isPrime=1;

    for(int i=2;i<n;i++){
        if(n%i==0){
           // cout<<"not prime"<<endl;
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime ";

    }else{
        cout<<"Not Prime";
    }
    
   
    return 0;
}