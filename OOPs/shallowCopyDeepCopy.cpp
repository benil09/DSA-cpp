#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    char *name;

    Student(int age, const char *n)
    {
        this->age = age;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
};

int main()
{
    Student s1(20, "Nil");
    Student s2 = s1; // shallow copy

    cout << "Before change: " << s1.name << " " << s2.name << endl;

    s1.name[0] = 'D'; // changing s2 also changes s1

    cout << "After change: " << s1.name << " " << s2.name << endl;

    //Deep Copy
    Student s3 = s1;
    s3.name[0] = 'N';

    cout << "After deep copy change: " << s1.name << " " << s3.name << endl;

    return 0;
}