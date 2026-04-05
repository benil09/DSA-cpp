#include <iostream>
#include<vector>
using namespace std;

vector<int> countBits(int n){
      vector<int>ans(n+1);
        for(int i = 0 ; i<=n;i++){
            int count = 0;
            int temp = i;
            while(temp!=0){
                int lastBit = n&1;
                if(lastBit == 1){
                    count++;
                }
                temp=temp>>1;
            }
            ans[i]=count;
        }
    return ans;
}

int main() {

    vector<int> res = countBits(5);

    cout<< "The required array is : "<< res << endl;



    return 0;
}