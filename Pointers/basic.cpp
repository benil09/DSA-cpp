#include <iostream>
using namespace std;

int main() {
    // int num =5;
    // cout<< num<<endl;
    // cout<<"The address of num is : "<< &num <<endl;

    // num++;
    // int *ptr = &num;
    // cout<< ptr << endl;
    // (*ptr)++;
    // cout<<num;


    int i=5;
    int *t=&i;
    cout<< (*t)++ << endl ;
    return 0;
}