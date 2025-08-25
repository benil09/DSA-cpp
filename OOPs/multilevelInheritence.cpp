#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking ... " ;
    }

};
class Dog:public Animal{
    public :
    string color;

    void bark(){
        cout << "🐶 Bhaw Bhaw" << endl;
    }
};

class Breed : public Dog{
    public:
    string breedName;

    public :
    void sound(){
        bark();
    }

    void display(){
        cout << "Breed Name: " << breedName << endl;
        cout << "Color: " << color << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main() {
    Breed b1;
    b1.age = 3;
    b1.weight = 15;
    b1.color = "Black";
    b1.breedName = "Labrador";

    b1.display();
    b1.speak();
    b1.bark();

    return 0;
}