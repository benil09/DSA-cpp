#include <iostream>
using namespace std;



int power(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main() {

    int p,q;
    cin>>p>>q;


    int x=power(p,q);
    cout<<x<<endl;
    return 0;
}