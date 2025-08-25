#include <iostream>
using namespace std;

class Animal{
    public :
    int weight;
    int age;

    public:
    void speak(){
        cout << "Speaking ... " ;
    }
};

class Dog:public Animal{
    public:
    string color;

    void bark(){
        cout << "🐶 Bhaw Bhaw" << endl;
    }


};

int main() {
    Dog d1;
    d1.weight = 20;
    d1.age = 5;
    d1.color = "Brown";

    cout << "Dog Details:" << endl;
    cout << "Weight: " << d1.weight << endl;
    cout << "Age: " << d1.age << endl;
    cout << "Color: " << d1.color << endl;

    d1.speak();
    d1.bark();

    
    
    return 0;
}