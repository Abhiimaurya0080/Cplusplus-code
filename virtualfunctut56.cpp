//pointer of the base class can point to the derived class object
// overwrite thedefault behaviour;


#include <iostream>
using namespace std;

class BaseClass {
public:
    int var_base;
    virtual void display() { // Include virtual display
        cout << "1 Base Class display var_base: " << var_base << endl;
    }
};

class DerivedClass : public BaseClass {
public:
    int var_derived;
    void display() override { // Use override to indicate overriding
        cout << "2 Base Class display var_base: " << var_base << endl;
        cout << "2 Derived Class display var_derived: " << var_derived << endl;
    }
};

int main() {
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    // Initialize variables
    obj_derived.var_base = 10; // Set base class variable
    obj_derived.var_derived = 20; // Set derived class variable

    base_class_pointer = &obj_derived; // Base class pointer pointing to derived class object
    base_class_pointer->display(); // Call display method

    return 0;
}


          