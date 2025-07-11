#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=0){
        return false;
    }
    for (int i=2;i<n;i++){
        if(n%i != 0){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    bool checkPrime = isPrime(n);

    if(checkPrime == true){
        cout<<" It is a prime number "<<endl;
    }else{
        cout<<"It is not a prime number "<<endl;
    }

    return 0;
}