#include <iostream>
using namespace std;
//brute force but this will fail when x is negative
double myPow(double x , int n){
    double pow = 1;
        for(int i = 0 ; i < n ; i++){
            pow = pow * x;
        }

        return pow;
}

// so now lets solve this issue using recursion 


double myPowRec(double x , int n){
        if (n == 0 ) return 1.0;
       
        // handle negative power
        if(n<0){
            return myPowRec(1/x,-n)
        }    
}

int main() {

    double x = 5;
    int n = 2; // -2

    double ans = 1;

  if(n==0) return 1.0;
  else if(n<0){
    x = 1/x;

   ans = myPowRec(x,n)
  }else{
   ans = myPowRec(x,n);
  }
    cout<<ans<<endl;
    return 0;
}