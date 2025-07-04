

#include <iostream>
using namespace std;

class Point { // Use 'class' instead of 'Class'
    int x, y; // Member variables

public: // Make the constructor and method public
    Point(int a, int b) { // Constructor should be defined correctly
        x = a;
        y = b;
    }

    void displayPoint() { // Correct the function name and add a space
        cout << "The point of x is (" << x << ") and y is (" << y << ")" << endl;
    }
};

int main() {
    Point p(1, 1); // Create an object of Point
    p.displayPoint(); // Call the displayPoint method

    Point q(4, 6); // Create another object of Point
    q.displayPoint(); // Call the displayPoint method

    return 0; // Return 0 to indicate successful execution
}