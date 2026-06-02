#include <iostream>
using namespace std;


int main() {
     vector<int> capacity = {1,5,3,7};
     int itemSize = 3;
     int minCap = INT_MAX;
        int ans = 0;
        for(int i = 0 ; i<capacity.size();i++){
            if (capacity[i] >= itemSize && capacity[i] < minCap  ){
                minCap = capacity[i];
                ans = i;
            }
        }
        cout << ans <<endl;
        return 0;
}