//  it means if we create a function then ivoke it with ssame name but different parameter


#include <iostream>
using namespace std;

class Complex {
    int a, b;

public:
    // Constructor with two parameters
    Complex(int x, int y) {
        a = x;
        b = y;
    }

    // Constructor with one parameter
    Complex(int x) {
        a = x;
        b = 0; // Initialize b to 0
    }

    // Function to print the complex number
    void printNumber() {
        cout << a << "+" << b << "i" << endl;
    }
};

int main() {
    Complex c1(4, 6); // Create a Complex object with two parameters
    c1.printNumber(); // Print the complex number

    Complex c2(5); // Create a Complex object with one parameter
    c2.printNumber(); // Print the complex number

    return 0;
}