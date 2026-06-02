#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
     int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> freq;
        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;
        }

        cout<< freq[1] <<endl;

    return 0;
}