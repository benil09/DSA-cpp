#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking ... ";
    }
};

class Bird{
    public:
    bool canFly;
    bool layEggs;

    public:
    void fly(){
        cout << "🐦 Flying ..." << endl;
    }


};

class Ostrich : public Animal, public Bird
{
public:
    bool canFly;

public:
    void run()
    {
        cout << "🐦 Running fast!" << endl;
    }
};

int main()
{

    Ostrich o1;

    o1.canFly = false;
    o1.layEggs = true;
    o1.weight = 150;

    cout << "Ostrich Details:" << endl;
    cout << "Can Fly: " << (o1.canFly ? "Yes" : "No") << endl;
    cout << "Lays Eggs: " << (o1.layEggs ? "Yes" : "No") << endl;

    if(o1.weight<50){
        o1.canFly=true;

    }else {
        o1.canFly=false;
    }

    cout << (o1.canFly ? "Can Fly: Yes" : "OverWeight : Cannot Fly") << endl;

    o1.fly();
    o1.run();
    o1.speak();
    return 0;
}