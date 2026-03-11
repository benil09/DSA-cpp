#include <iostream>
using namespace std;
#include <vector>

int main() {
    int arr[6]={-3 , -2,-1,0,2,3};
    int n = 6;
   vector <int> res;

    int i = 0 ,j=0;

    for (int i =0 ;i<n-1;i++){
        if(arr[i]>=0){
            break;
        }else{
            j++;
        }
    }

    int temp = j;
         while(i < temp && j < n-1){
            if(arr[i]*arr[i] > arr[j]*arr[j] ){
                res.push_back(arr[j]*arr[j]);
                j++;

            }else{
              res.push_back(arr[i]*arr[i]);
              i++;
            }
         }
    return 0;
}