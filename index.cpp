#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {0,1,2,0,1,2};
      int zero=0;
        int one =0;
        int two = 0;
       for(int i=0;i<arr.size();i++){
           if(arr[i] == 0){
               zero++;
           }
           else if(arr[i] == 1){
               one++;
           }else{
               two++;
           }
       }

       int index=0;
       for(int i=0;i<zero;i++) arr[index++]=0;
       for(int i=0;i<one;i++) arr[index++]=1;
       for(int i=0;i<two;i++) arr[index++]=2;

       for(int ans:arr){
        cout<<ans;
       }
       cout<<endl;

       
    return 0;
}