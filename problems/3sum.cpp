#include <iostream>
using namespace std;
#include <vector> 

int main() {

    vector <int> nums = {-1,0,1,2,-1,4};
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    // for(int x:nums){
    //     cout << x << " "; 
    // }
    int n = nums.size();
    for(int i = 0 ; i < n-2 ; i++ ) {
        if(nums[i] == nums[i-1]) continue;

        int left = i+1;
        int right = n-1;

        while(left<right){
            int sum=nums[i]+nums[left]+nums[right] ;
            if(sum == 0){
                res.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                if(nums[left] == nums[left-1]) continue;
                if(nums[right] == nums[right+1]) continue;
                

            }else if(sum > 0 ){
                right -- ;
            }else{
                left++;
            }
        }

    }
    
    return 0;
}