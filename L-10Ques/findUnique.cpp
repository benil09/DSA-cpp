#include <iostream>
using namespace std;


int findUnique(int arr[],int size){
    int key =0;
    for (int i=0;i<size;i++){
        key=key^arr[i];
    }return key;
}
int main() {
    int size ;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

   int res= findUnique(arr,size);
   cout<<"The unique elelent is : "<<res;




    return 0;
}