#include <iostream>
using namespace std;

// Forward declaration
// puri class ka function kahi sebhi access kr ske use kahte hai member functions

class Complex;

class Calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex {
    int a, b;

    // Individual declaring functions as friends
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumCompComplex(Complex, Complex);
    // Alternatively: Declaring the entire Calculator class as friends.
    friend class Calculator;

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }
    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl; // Corrected to print 'i'
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a); // Corrected to sum real parts of o1 and o2
}

int Calculator::sumCompComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b); // Corrected to sum imaginary parts of o1 and o2
}

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl; // Corrected variable name
    
    return 0;
}