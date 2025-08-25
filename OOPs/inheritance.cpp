#include <iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }

    int setWeight(int weight){
        this->weight = weight;
        return this->weight;
    }

};

class Male : public Human{
    public:
    bool hasBeard;

    void sleep(){
        cout << "Male is sleeping" << endl;
    }
};



int main() {

    Male m1;

    m1.height=168;
    m1.weight=46;
    m1.age=21;
    m1.hasBeard=false;

    cout << "Height: " << m1.height << endl;
    cout << "Weight: " << m1.weight << endl;
    cout << "Age: " << m1.getAge() << endl;
    cout << "Has Beard: " << (m1.hasBeard ? "Yes" : "No") << endl;
    m1.sleep();
    return 0;
}