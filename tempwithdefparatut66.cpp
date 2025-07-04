#include <iostream> // Include directive for input-output stream
using namespace std;

template<class T1 = float, class T2 = int, class T3 = char>
class Mouse {
    public:
        T1 a;
        T2 b;
        T3 c;

        // Constructor
        Mouse(T1 x, T2 y, T3 z) {
            a = x;
            b = y;
            c = z;
        }

        // Display function
        void display() {
            cout << "value of a is " << a << endl;
            cout << "value of b is " << b << endl;
            cout << "value of c is " << c << endl;
        }
};

int main() {
    Mouse<> m(2.3f, 45, 'O'); // Changed 'OG' to 'O' to match char type
    m.display();
    cout << endl;

    return 0;
}
