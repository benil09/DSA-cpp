#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<vector<int>> interval = {{1,3},{2,6},{8,10},{15,18},{3,4},{1,2}};
    cout<< interval.back()[0] << " " << interval.back()[1];

    // Step 1: Sort intervals
    sort(interval.begin(), interval.end());

    // vector<vector<int>> result;

    // // Step 2: Traverse and merge
    // for (int i = 0; i < interval.size(); i++) {

    //     if (result.empty() || result.back()[1] < interval[i][0]) {
    //         result.push_back(interval[i]);
    //     } else {
    //         result.back()[1] = max(result.back()[1], interval[i][1]);
    //     }
    // }

    // // Step 3: Print result
    // for (int i = 0 ; i<result.size();i++) {
    //     cout << "[" << interval[0] << ", " << interval[1] << "] ";
    // }

    return 0;
}