#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    int a=0;
    int b=1;
    
    cout << a <<" "<< b << " ";
    for(int i=1;i<=n;i++){
        int nextFib=a+b;
        cout<< nextFib<< " ";
        a=b;
        b=nextFib;
    }
    return 0;
}