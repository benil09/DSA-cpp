#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    int age;
    // If parameter  names are same as variables → use this to differentiate.
    // If names are different → not required, but you can still use it for clarity (some developers prefer consistency).

    Student(int roll, string name , int age){
        // this is actually a pointer
        this->roll = roll;
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main() {
    Student s1(101,"Nil",20); // dont use '' for string -> it is for single character
    Student s2(102,"Mansi",21);
    s1.display();
    s2.display();
    return 0;
}