#include <iostream>
using namespace std;

int fibonacciNumber( int n ){
   //base case 
   if(n==0) return 0 ;
   if (n ==1 ) return 1;
   int ans = fibonacciNumber(n-1)+fibonacciNumber(n-2);
   return ans;
}

int main() {
    int n = 8 ;
    int res = fibonacciNumber(n);
    cout << res;
    return 0;
}