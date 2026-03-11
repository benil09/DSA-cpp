#include <iostream>
using namespace std;
int arraySum(int arr[],int size){
    //base case
    if(size == 0 ) return 0;
    if(size == 1) return arr[0];

    int rem = arraySum(arr+1,size-1);
    int sum = arr[0]+rem;


    return sum;


}
int main() {
    int arr[5] = {3,5,4,2,1};
    int length = 5;

    int ans = arraySum(arr,length);
    cout << ans;
    return 0;
}