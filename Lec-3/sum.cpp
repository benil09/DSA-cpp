#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin >> n;

   int  i=0;
   int  sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"the final sum is : "<< sum << endl;

}