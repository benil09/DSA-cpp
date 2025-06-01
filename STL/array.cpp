#include <iostream>
#include <array>
using namespace std;

int main() {
    int arr[5] ={1,3,4,5,6};

    array<int , 5> a = {6,7,8,9,10};

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }

    cout<<"element at 3rd index "<<a[3]<<endl;
    cout<<"element at 2nd index "<<a.at(2)<<endl;
    cout<<"empty or not -> "<<a.empty()<<endl;
    cout<<"1st element -> "<<a.front()<<endl;
    cout<<"last element -> "<<a.back()<<endl;

    return 0;
}