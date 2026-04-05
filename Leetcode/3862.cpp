#include <iostream>
using namespace std;

int main() {
    vector<int> arr = {2,1,2};

    int ans = -1;
    for (int i = 0 ; i < arr.size();i++){
            int sum = 0;
            int pro = 1;
        for(int j = 0 ; j < i ; j++){
            sum = sum + arr[j];
        }
        for(int j = i+1 ; j<arr.size();j++){
            pro = pro*arr[j];
        }
        if(sum == pro){
            ans = i;
        }
    }

    cout<< ans << endl;
    
    return 0;
}