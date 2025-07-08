#include <iostream>
using namespace std;

void binarySearch(int arr[][4],int row ,int col,int target){
    int s=0;
    int e=row*col-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid][]==target);
    }


}

int main() {
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int row=sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);




    return 0;
}