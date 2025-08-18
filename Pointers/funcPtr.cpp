#include <iostream>
using namespace std;

void update(int *ptr)
{
    //ptr = ptr + 1;
    cout << "Inside update function: " << ptr << endl; // address after increment
    cout << "Value pointed to by ptr: " << *ptr << endl; // value at new address (garbage value)
    *ptr = *ptr + 1;
    cout << "Value pointed to by ptr after increment: " << *ptr << endl; // value at new address
}

int main()
{
    // int val = 5;
    // int *ptr = &val;
    // cout << "Value of ptr: " << ptr << endl;             // address of val
    // cout << "Value pointed to by ptr: " << *ptr << endl; // 5
    // cout << &val << endl;
    // cout << ptr + 1 << endl;
    // cout << *ptr + 1 << endl;
    // cout << *(ptr + 54) << endl; // some random integer

    int a = 4;
    int *p = &a;

    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;

    return 0;
}