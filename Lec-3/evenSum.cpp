#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int i=0;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
            i++;
        }else{
            i++;
        }
    }
    cout<<"the sum of the numbers is : "<< sum;
}