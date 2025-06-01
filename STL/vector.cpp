#include <iostream>
using namespace std;

int main() {
    vector <int> v;

    v.push_back(0);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<"size ->"<<v.size()<<endl;

    cout<<"1st element ->"<<v[0]<<endl;
    cout<<"2nd element ->"<<v.at(1)<<endl;
    cout<<"3rd element ->"<<v.at(2)<<endl;
    cout<<"Empty or not ->"<<v.empty()<<endl;// 0-> false 1-> true
    cout<<"first element ->"<<v.front()<<endl;
    cout<<"last element ->"<<v.back()<<endl;
    




    return 0;
}