#include <iostream>
using namespace std;


int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n , int r ){

    int num = factorial(n);
    int den=factorial(r)*factorial(n-r); 
    int ncr=num/den;
    

    return  ncr ;

}
int main() {

    int res = nCr(8,2);
    cout<<res;

   
    
    return 0;
}