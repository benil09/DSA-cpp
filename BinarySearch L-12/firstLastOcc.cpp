#include <iostream>
using namespace std;
int lastOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]<key){
            s=mid+1;


        }
        if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int firstOcc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}



int main() {
    int arr[10]={1,3,4,4,4,4,5,6,6,6};
    
    cout << "the last occurance of  4 is : "<<lastOcc(arr,10,6)<<endl;
    cout << "the first occurance of  4 is : "<<firstOcc(arr,10,6)<<endl;

    return 0;
}