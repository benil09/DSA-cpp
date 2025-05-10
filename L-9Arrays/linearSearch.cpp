#include <iostream>
using namespace std;

bool linearSearch(int arr[] , int size,int key){

    for (int i=0;i<size;i++){
        if(arr[i]== key){
            return true;
        }
    }
    return false;

}

int main() {

    int size;
    cout<<"Enter the size of the array : ";
    cin >> size;

    int key;
    cout << "Enter the number to be searched in the array : ";
    cin>> key;


    cout<< "Enter the elements of the array : ";
    int arr[100];
    for(int i=0;i<size;i++){
        cin>> arr[i];
        
    }
    //check whether 1 is present in it or not
    bool res = linearSearch(arr,size,key );
    if(res){
        cout<<"Element found";
    }else{
        cout<<"Not found";
    }

    return 0;
}