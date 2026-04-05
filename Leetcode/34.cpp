#include <iostream>
#include <vector>
using namespace std;


 // find the starting and the ending index of a given target 
int stIndex(vector<int> arr , int target){
    int st = 0 , end = arr.size()-1;
    int ans = -1;
     while(st <= end){
        int mid = (st+end)/2;
        if(arr[mid]==target){
            ans = mid;
            end = mid -1;
        } 
        else if(arr[mid] < target){
            st = mid +1;
        }else{
            end = mid-1;
        }
    }
    return ans;

}

// find the last index of the target
int endIdx (vector<int> arr , int target){
    int st = 0 , end = arr.size()-1;
    int ans = -1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid] == target ){
            ans = mid;
            st = mid+1;
        }else if(arr[mid] > target ){
            end = mid -1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {5,7,7,8,8,10};
    int target = 8;
    
    int stidx = stIndex(arr,target);
    cout<<stidx<<endl;
    int edidx = endIdx(arr,target);

    cout << stidx << " " << edidx<< endl;







    return 0;
}