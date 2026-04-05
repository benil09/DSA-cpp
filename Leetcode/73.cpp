#include <iostream>
#include<map>
using namespace std;

int main() {

    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

  
    int n = matrix.size();
    for(int i = 0 ; i < n ;  i++){
        for(int j = 0 ; j < matrix[i].size();j++){
            if(matrix[i][j] == 0){
              for(int k=0; k<matrix[i].size() ; k++ ){
                matrix[i][k]=0;
              }
            }
        }
    }

    for(int i = 0 ; i<matrix.size();i++){
        for(int j = 0 ; j < matrix[i].size();j++){
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
