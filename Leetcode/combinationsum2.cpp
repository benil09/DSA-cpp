#include <iostream>
#include <vector>
using namespace std;

void solve(int index , vector<int> candidates , int target , vector<int> output , vector<vector<int>>& ans    ){
    //base case
    if(index == candidates.size()){
        if(target == 0) {
            ans.push_back(output);
        }
        return;
    }

    if(target < 0) return;
    //include
    output.push_back(candidates[index]);
    solve(index+1 , candidates , target - candidates[index] , output , ans);
    output.pop_back();

    //exclude
    solve(index+1 , candidates ,  target ,  output , ans);
 }

int main() {
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int> output;
    solve(0,candidates,target,output,ans)
    return 0;
}