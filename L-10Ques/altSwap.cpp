#include <iostream>
using namespace std;


void altSwap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
int main() {
    int size;
    cout<<"Enter the size of the array : ";
    cin >> size;


    int arr[100];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    altSwap(arr,size);

    cout<<"Array after the alternate swapping will look like : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}