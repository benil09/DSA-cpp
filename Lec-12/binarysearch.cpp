#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start <= end){
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid] < key){
            start=mid+1;

        }
        if(arr[mid] > key){
            end=mid-1;

        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}

int main() {
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    int key;
    cout<<"Enter the key to be searched";
    cin>>key;

    int res = binarySearch(arr,size,key);
    cout<<"The result is found at the index : "<<res;

    return 0;
}