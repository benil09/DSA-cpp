#include <iostream>

using namespace std;
int totalOcc(int arr[],int size, int key){   
    int ans=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans++;
        }
    }
    return key;
    // NOTE : this is linear search technique with time Complexity of O(n) and could be optimized using the binary search with time complexity of O(logn)


}

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
    cout<<"The total number of occurance of 4 is : "<<totalOcc(arr,10,4)<<endl;
    // binary Search method

    int totalOcc=lastOcc(arr,10,4) -firstOcc(arr,10,4)+1;
    cout<<"the total occurance of 4 is : "<< totalOcc<<endl;


    
    return 0;
}