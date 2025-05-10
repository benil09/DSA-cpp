#include <iostream>
using namespace std;


int getmin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main() {
   int size;
   cout<<"Enter the value of size : ";
   cin>>size;

   int num[100];
   cout<<"Enter the elements of array : ";
   for(int i=0;i<size;i++){
    cin>>num[i];
   }



   int min= getmin(num,size);
   int max= getMax(num,size);

   cout<<" Max value in the array is : "<< max<<endl;
   cout<<" Min value in the array is : "<< min;

    return 0;
}