#include <iostream>
using namespace std;

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
      if(i&1){
        // odd case -> print bottom to top
        for(int j=2;j>=0;j--){
            cout<<arr[j][i]<< " ";
        }
      }else{
        // even case -> print top to bottom
        for(int j=0;j<3;j++){
            cout<<arr[j][i] << " ";
        }
    }
}
    return 0;
}