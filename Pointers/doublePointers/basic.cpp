#include <iostream>
using namespace std;

void update(int** p){
   // p=p+1;
   // *p=*p+1;
    **p=**p+1;
}

int main() {
    int i=5;
    int* ptr = &i; // pointer to i 
    int** dptr = &ptr; // pointer to pointer to i

    

    cout<< "before i : "<<i<<endl;
    cout<< "before ptr : "<<ptr<<endl;
    cout<< "before dptr : "<<dptr<<endl;
    update(dptr);
    cout<< "after i : "<<i<<endl;
    cout<< "after ptr : "<<ptr<<endl;
    cout<< "after dptr : "<<dptr<<endl;

    return 0;
}