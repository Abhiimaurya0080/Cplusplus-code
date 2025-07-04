#include<iostream>
using namespace std;
class Number{
    int a;                // it is a type of constructor that creates a copy of another object .if we want to resemble can use copy constructor;
    public:
    Number (){
        a=0;

    }
    Number (int num){
        a=num;
    }


//   when no copy constructor is found , compiler supplies its own copy constructor
Number(Number &obj){
     cout<<"copy constructor called !!!!"<<endl;
      a = obj.a;
}
    void display (){
        cout<<"The number for this object is "<<a<<endl;
    } 
};
int main(){
    Number x,y,z(78),z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // copy constructor invoked
    z1.display();
    z2 = z;// copy constructor not called //  here  constructor onvoke for that bcz  main provide thhe data of z2 and copy that
    z2.display();
    Number z3= z;
    z3.display();


    
    return 0;
}