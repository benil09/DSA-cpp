#include <iostream>
using namespace std;


bool isSorted(int arr[],int size){
    //base case
    if(size == 0 || size == 1) return true;

    if(arr[0]>arr[1]){
        return false;
    }else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}
int main() {
    int arr[10] = {2};
    int length = 5;

    bool ans = isSorted(arr,length);
    if(ans){
        cout<<"array is sorted"<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}