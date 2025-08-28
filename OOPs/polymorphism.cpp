#include <iostream>
using namespace std;
//function Overloading

class A{
    public:
    int a;
    int b;
    int c;
    int d;


    public :
    void add(){
        cout << "Addition is : " << (a+b+c+d) << endl;
    }
    void add(int x,int y){
        cout << "Addition is : " << (x+y) << endl;
    }
    int add(int x,int y,int z=0){
        return (x+y);
    }

    int add(int x,int y,int z,int w){
        return (x+y+z+w);
    }
};

int main() {
    A obj;
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
    obj.add();
    obj.add(5,10);
    cout << "Addition is : " << obj.add(5,10,15) << endl;
    cout << "Addition is : " << obj.add(5,10,15,20) << endl;
    return 0;
}