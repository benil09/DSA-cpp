#include <iostream>
using namespace std;

int main()
{
 int setbit=0;
 int n=128;
 while(n!=0){
   int lastbit=n&1;
   if(lastbit==1){
      setbit=setbit+1;
   }
   n=n>>1;
 }
 cout<<setbit;

   return 0;
}