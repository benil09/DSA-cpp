#include <iostream>
using namespace std;

double Pow(double x , int n , double ans){
    if(n < 0){
        x = 1/x;
        n = -n;
      }

     if(n == 0) return ans;

     

     if(n%2 == 0) { //even
        return Pow(x*x,n/2,ans);
     }else{
        return Pow(x ,n-1 ,ans*x );
     }

}

int main() {

    double x = 2;
    int n = 5;
    double ans=1;

   double res =  Pow(x,n,ans);

    cout << res << endl;



    return 0;
}