#include <iostream>
using namespace std;

void  selectionSort(int arr[],int n){
    

    for (int i=0;i<n-1; i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);

    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);
    cout<<"The array after the selection sort is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }

    return 0;
}