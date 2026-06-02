#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int temp = n;
    int i =0;
    while(temp >> i != 0){
        n=n^(1<<i);
        i++;
    }

    cout << " n now becomes : " << n << endl;
    return 0;
}