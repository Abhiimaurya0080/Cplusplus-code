#include<iostream>
using namespace std;
#include<cmath>
class simplecalc
{ protected:
    float a , b;
    public : 
    simplecalc (float x , float y){
    a=x;
    b=y;
}

void show (){
     cout <<" The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
     cout <<" The substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
     cout <<" The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
     cout <<" The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
     cout <<" The increment  of " << ++a <<endl;
  
}
};

class scientificcalc{
    protected:
    float a,b;
    public:
    scientificcalc( float x, float y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"The sine of "<< a <<" + "<< b <<" is " <<sin(a + b)<<endl;
        cout<<"The cosine of "<< a <<" + "<< b <<" is " << cos(a + b)<<endl;
        cout<<"The tangent  of "<< a<<" + "<<b<<" is " << tan(a + b)<<endl;
        cout<< a <<" raised to "<< b <<" is " <<pow (a ,b)<<endl;
    }

};
 
class hybridcalc: public simplecalc, scientificcalc{
    protected:
    float a,b;
    public:
    hybridcalc(float x, float y):simplecalc(x,y),scientificcalc(x,y){
        a=x;
        b=y;
    }
        void calcfunc(){
            show();
            display();
        }
};
int main(){
    float x,y;
    cout<<"Enter the number: 1 "<<endl;
    cin>>x;
    cout<<"Enter the number: 2 "<<endl;
    cin>>y;
    hybridcalc abhii(x,y);
    abhii.calcfunc();
    //abhii.show();

    
    return 0;
}


// #include <iostream>
// #include <cmath> // Include cmath for mathematical functions
// using namespace std;

// class simplecalc {
// protected:
//     float a, b;
// public:
//     simplecalc(float x, float y) {
//         a = x;
//         b = y;
//     }

//     void show() {
//         cout << "The sum of " << a << " and " << b << " is " << a + b << endl;
//         cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
//         cout << "The division of " << a << " and " << b << " is " << (b != 0 ? a / b : 0) << endl; // Check for division by zero
//         cout << "The multiplication of " << a << " and " << b << " is " << a * b << endl;
//     }
// };

// class scientificcalc {
// protected:
//     float a, b;
// public:
//     scientificcalc(float x, float y) {
//         a = x;
//         b = y;
//     }

//     void display() {
//         cout << "The sine of " << a << " + " << b << " is " << sin(a + b) << endl;
//         cout << "The cosine of " << a << " + " << b << " is " << cos(a + b) << endl;
//         cout << "The tangent of " << a << " + " << b << " is " << tan(a + b) << endl;
//         cout << a << " raised to " << b << " is " << pow(a, b) << endl; // Correct usage of pow
//     }
// };

// class hybridcalc : public simplecalc, public scientificcalc {
// public:
//     hybridcalc(float x, float y) : simplecalc(x, y), scientificcalc(x, y) {}

//     void calcfunc() {
//         show();
//         display();
//     }
// };

// int main() {
//     float x, y;
//     cout << "Enter the number: 1 " << endl;
//     cin >> x; // Added missing semicolon
//     cout << "Enter the number: 2 " << endl;
//     cin >> y;

//     hybridcalc abhii(x, y);
//     abhii.calcfunc();

//     return 0;
// }