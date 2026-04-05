#include <iostream>
using namespace std;

int main() {

    int n = 0;

    int prevBit;

    if( n&1 ){
        //cout << " The number is odd " << endl;
        prevBit = n&1;
        n = n>>1;
       // cout << " Now the number becomes : "<<n<<endl;
    }else{
       // cout<<" The number is even "<< endl;
        prevBit = n&1;
        n=n>>1;
       // cout << " Now the number becomes : "<<n<<endl;
    }
   bool ans=true;
    while(n != 0){
        int lastBit = n&1;
        if(lastBit == prevBit){
            ans=false;
            break;
        //cout << "The Bits are not alternating"<<endl;    
        }else{
            prevBit = lastBit;
            n=n>>1;
        }
    }

    if(ans){
        cout<< "the bits are alternating"<<endl;
    }else{
        cout << "the bits are not alternating"<<endl;
    }
    return 0;
}