#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>arr = {100,200,300,400};
    int k = 2;

    int sum = 0;
    for(int i = 0 ; i < k ; i++){
        sum = sum +arr[i];
    }
    cout << sum ;

    int low=0,high=k-1;
    int res = INT_MIN;

    

    while(high < arr.size() ){
        res = max(res,sum);
        low++;
        high++;

        if(high == arr.size()) break;
        sum = sum - arr[low-1] +arr[high];
        

    }
    cout << sum << endl;
    cout << res;

    return 0;
}