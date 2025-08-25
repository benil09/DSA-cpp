#include <iostream>
using namespace std;

class Employee {
    private:
    string name;
    int age;
    int height;

    public:
     string getName() {            
        return name;        
    }    

    // set method for employee name to set     
    // the value in private variable name    
    void setName(string employeeName) {        
        this->name = employeeName;    
    }    

    // get method for employee age to access      
    // private variable age    
    int getAge() {        
        return age;    
    }    

    // set method for employee age to set     
    // the value in private variable age    
    void setAge(int employeeAge) {        
        this->age = employeeAge;    
    }    

    // get method for employee height to access      
    // private variable height    
    int getHeight() {        
        return height;    
    }    

    // set method for employee height to set     
    // the value in private variable height    
    void setHeight(int employeeHeight) {        
        this->height = employeeHeight;    
    }    

   
};


int main() {
    Employee e1;

    e1.setName("Nil");
    e1.setAge(22);
    e1.setHeight(5);

    cout << e1.getName() << endl;
    cout << e1.getAge() << endl;
    cout << e1.getHeight() << endl;

    return 0;
}