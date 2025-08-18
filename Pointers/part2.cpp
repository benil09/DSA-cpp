#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << arr << endl; // address
    cout << *arr << endl; // garbage value since uninitialized 

    int cpp[10] = {12,34,21,345,123};
    cout<<cpp[0]<<endl; // avalue at 0th index
    cout<<cpp<<endl; // address of first element
    cout << *cpp << endl; // value at 0th index
    cout<< *cpp+1<<endl; // 13 -> value at 0th index + 1
    cout<< *(cpp+1)<<endl; // 34 -> value at 1st index
    cout<< &cpp <<endl; // address of the array
    cout<< &cpp[0] <<endl; // address of first element 

    //size 
    cout<<sizeof(cpp)<<endl; // size of the array in bytes
    cout<<sizeof(*cpp)<<endl; // size of the first element in bytes
    cout <<sizeof(&cpp)<<endl; // size of the address of the array in bytes

    int xyz[10]={12,32,12,34,24};
   // xyz=xyz+1; -> error since sybmbol table ka content cannot be changed but
    cout << &xyz<<endl;
  // int *p = &xyz;  // error because of data type mismatch
  int *p = xyz;
  cout<<p<<endl; // address of the first element


    return 0;
}