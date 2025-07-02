#include <iostream>
using namespace std;

void rotateLeft(int arr[],int n,int k){
    int temp[4]={};
    for (int i=n-1;i>=0;i--){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
    return ; 




}

int main() {
    int n = 4;
    int k=2;
    int arr[]={9,4,2,6};
    rotateLeft(arr,n,k);

    for(int i=0;i<4;i++){
        cout<<arr[i] << " ";
    }

    return 0;
}