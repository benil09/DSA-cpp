#include <iostream>
using namespace std;

int main() {
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans;

    int sCol=0;
    int sRow=0;
    int eCol=3;
    int eRow=2 ;
    int total = 3*4;

    int count =0;

    while(count < total){
        // 1st row print
        for(int index=sCol;index<=eCol && count < total ;index++){
         //   cout<<arr[sRow][index]<< " ";
            ans.push_back(arr[sRow][index]);
            count++;
        }
        sRow++;
        // last col print
        for(int index =sRow ; index<=eRow && count < total ; index++ ){
          //  cout<<arr[index][eCol]<< " ";
            ans.push_back(arr[index][eCol]);
            count ++;
        }
        eCol--;

        //last row print
        for(int index=eCol;index>=sCol && count < total ;index--){
           // cout<< arr[index][eRow] << " ";
            ans.push_back(arr[eRow][index]);
            count++;
        }
        eRow--;

        // first Col Print
        for(int index = eRow;index>=sRow && count < total ;index--){
            ans.push_back(arr[index][sCol]);
            count ++;
        }
        sCol++;



    }

     for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}