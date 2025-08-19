#include <iostream>
using namespace std;

int main() {
    int first=9;
    int* p=&first;
    cout<<(*p)++<<endl;
    cout<<first<<endl;
    return 0;
}