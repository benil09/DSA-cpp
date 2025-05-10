#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ansr=0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        ansr=(bit*pow(10,i))+ansr;
        n=n>>1;
        i++;
    }
    cout<<"the binary rep of n is : "<< ansr<<endl;
    return 0;
}