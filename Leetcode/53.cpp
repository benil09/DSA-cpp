#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {-5,-4,-1,-7,-8};

    int maxSum = INT_MIN;
    int sum = 0;

    for(int i = 0 ; i< nums.size();i++){
        sum += nums[i]; 

        if(sum >maxSum){
            maxSum = sum;
        }

        if(sum<0){
            sum = 0;
        }
    }

    cout<<maxSum<<endl;
    return 0;

}