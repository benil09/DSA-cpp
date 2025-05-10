#include <iostream>
using namespace std;

//1->odd
//0->even
bool isEven(int n){
    if(n&1){
        return 1; //odd
    }
    return 0;   //even
}
int main() {
    cout<<isEven(4)<<endl;

    return 0;
}