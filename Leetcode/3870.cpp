#include <iostream>
using namespace std;

int main() {
    int n = 100000;

   int commaCount = 0;
    int ans = 0;
    
    for(int i = 1 ; i<=n ;i++){
        int temp=i;
        int digitCount = 0;
        while(temp !=0){
            temp =temp/10;
            digitCount++;
        }
        cout <<"Digit count is :" << digitCount<<endl;
        if(digitCount == 1 || digitCount == 2 || digitCount == 3){
            commaCount = 0;
        }else{
            commaCount++;
        }
     }

     cout << commaCount<<endl;
    
    return 0;
}