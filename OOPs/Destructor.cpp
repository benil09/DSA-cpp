#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    string name;
    int roll;
   static int courseDuration;

    Student(int age, string name, int roll)
    {
        this->age = age;
        this->name = name;
        this->roll = roll;
    }

    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int Student::courseDuration = 3; 

int main()
{
    Student s1(20, "Nil", 101);
    Student s2(21, "Mannu", 102);

    return 0;
}