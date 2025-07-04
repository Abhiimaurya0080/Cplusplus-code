// #include<iostream>
// using namespace std;
// class Complex{
//     int a,b;
//     public:
//     Complex( int ,int ); //constructor declaration
//     void printNumber(){
//         cout<<a<<"+"<<b<<"i"<<endl;
//     } 
// };
//   Complex ::Complex(int x, int y)  // This is a parameterized construtor as it takes no parameters 
//    { a=x;
//      b=y;
//     }
// int main(){
//     // implicit call 
//     Complex a(4 ,6);
//     a.printNumber();
//     // explicit call
//     Complex b = Complex(5 ,7);
//     b.printNumber();
    
//     return 0;
// }
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex( void ); //constructor declaration
    void printNumber(){
        cout<<a<<"+"<<b<<"i"<<endl;
    } 
};
  Complex ::Complex(void)  // This is a default construtor as it takes no parametersṇ 
   { a=0;
     b=0;
    }
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    
    return 0;
}