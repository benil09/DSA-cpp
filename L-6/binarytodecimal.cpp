#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number in binary : ";
    cin>>n;
    int i=0;
    int ansr=0;
    while(n!=0){
       int digit=n%10;

       if(digit==1){
        ansr=ansr+pow(2,i);
       }
       n=n/10;
       i++;
    }
    cout<<"the decimal representation of n is : "<< ansr<<endl;


    return 0;
}