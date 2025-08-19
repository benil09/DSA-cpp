#include <iostream>
using namespace std;

int main() {
    int first=8;
    int sec=18;
    int* ptr = &sec;
    *ptr=9;
    cout<<first<<" "<<sec<<endl;

    return 0;
}