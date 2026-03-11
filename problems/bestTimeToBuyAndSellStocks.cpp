#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums = {7,6,4,3,1};

    int max_diff = 0;

    for(int i =0 ; i<nums.size();i++){
        for (int j = i+1;j<=nums.size();j++){
            if(nums[j]-nums[i]>max_diff && nums[j]-nums[i]>0 ){
                max_diff = nums[j]-nums[i];
            }
        }
    }
    cout<<"the maximum difference is : "<<max_diff<<endl;


    return 0;
}