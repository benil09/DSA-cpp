#include <iostream>
using namespace std;

bool isPresent(int arr[][3],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return 1;
            }

        }
    }
    return 0;
}

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int key;
    cout<<"Enter the key :";
    cin>>key;

    if(isPresent(arr,key,3,3)){
        cout<<"element found";

    }else{
        cout<<"Element not found";
    }

    return 0;
}