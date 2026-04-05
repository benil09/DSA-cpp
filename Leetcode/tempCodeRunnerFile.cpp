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

     if(n<0) return 1/ans;

     

}