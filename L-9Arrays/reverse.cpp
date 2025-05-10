#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int n = size;

   

    for (int i = 0 ; i<n ; i++ ){
        int temp = arr[n-i];
            arr[n-i]=arr[i];
            arr[i]=temp;
            
        
        

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