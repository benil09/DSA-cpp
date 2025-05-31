#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
     int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    cout<<"The array after the selection sort is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;
}