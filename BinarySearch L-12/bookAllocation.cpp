#include <iostream>
using namespace std;

bool isValid(vector<int> arr ,int n,int  m,int maxAllowedPages){
    int stu = 1 ,pages = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i]> maxAllowedPages) return false;
        if(pages+arr[i]<=maxAllowedPages){
            pages += arr[i];
        }else{
            stu++;
            pages=arr[i];
        }
    }
    if(stu > m ) return false;
    return true;
}

int allocateBooks(vector<int> arr ,int n , int m){
    if(m > n) return -1;
    int sum = 0 ;
    for(int i = 0 ; i<n;i++){
        sum += arr[i];
    }

    int start = 0 , end = sum;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2 ;
        if(isValid(arr,n,m,mid)){ // left part search
            ans = mid;
            end = mid-1;
        }else{ // invalid -> right part search 
            start = mid+1;
        }
    }

    return ans;
}
int main() {

    vector<int> arr = {17,12,20};
    int n = arr.size();
    int m = 2;

    cout<<allocateBooks(arr,n,m)<<endl;

    return 0;
}