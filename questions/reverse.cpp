#include <iostream>
using namespace std;


void reverse(int arr[] , int m,int n){
    int s=m+1;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;

    }
}

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    reverse(arr,3,8);

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}