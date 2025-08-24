#include <iostream>
using namespace std;

class  Student{
    int roll;
    string name;
    int age;

    public:
    Student(int r, string n, int a) {
        roll = r;
        name = n;
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        age = s.age;
    }
    // just to print 
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1(101, "Nil", 20);
    Student s2 = s1;  // Calls copy constructor
    s1.display();
    s2.display();
    return 0;
}