
#include <iostream>
using namespace std;
/*Constructor is a special member function with same name as of the class . It is  used to  intliaze the object of its class 
 Constructor is called automatically for these function they are created*/
class Complex {
    int a, b;
public:
    Complex(); // Default constructor declaration
    void printNumber() {
        cout << a << "+" << b << "i" << endl;
    }
};

// Default constructor definition
Complex::Complex() {
    a = 10;
    b = 20;
}

int main() {
    // Complex c1; -- this is call the default constructor
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber(); // Added to print c3 as well

    return 0;
}