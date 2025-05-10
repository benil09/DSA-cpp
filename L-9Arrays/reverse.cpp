#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int n = size;
    int start = 0;
    int end =n-1 ;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
        
}

int main() {
    int size;
    cout<<"Enter the size of the array : ";
    cin >> size;

    int arr[100];
    cout<<"Enter the elements of the array : ";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }

    reverse(arr,size);
    cout<<"Reversed array is : ";

    for(int i=0;i<size;i++){
        cout<<arr[i] << " ";
    }


    return 0;
}