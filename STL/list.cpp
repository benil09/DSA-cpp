#include <iostream>
#include <list>
using namespace std;

int main() {
    list <int>l;

    list <int> n(l); // will copy l into n since l is empty as of now it will copy empty list 

    list <int> p(5,100);// will create a new list which contains 5 elements and each element is 100
    for(int i:p){
        cout<<i<<endl; 
    }

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<endl;
    }
    
    l.erase(l.begin()); // erase the element which is at the beginning of the list

    for(int i:l){   //will print the list where i belongs to l
        cout<<i<<endl;
    }

    l.push_back(2);
    l.push_front(0);
    l.push_back(3);

    cout<<"is empty : "<<l.empty()<<endl;
    cout<<"first element : "<<l.front()<<endl;
    cout<<"last element : "<<l.back()<<endl;
    cout<<"size : "<<l.size()<<endl;


    
    return 0;
}