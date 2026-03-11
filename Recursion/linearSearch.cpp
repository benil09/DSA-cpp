#include <iostream>
using namespace std;
int linearSearch(int arr[] , int size , int key){
    //base case 
        if(size == 0 ) return 0;

        if(arr[0]==key){
            return arr[0];
        }else{
            int remPart = linearSearch(arr+1,size-1,key);
            return remPart;
        }

}
int main() {
    int arr[5]={2,4,6,8,1};
    int size = 5;
    int key = 1;

    int ans = linearSearch(arr,size,key);
    cout<< ans;
    return 0;
}