#include<iostream>
using namespace std;
class Base   /*Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.  we have two classes 
“employee” and “programmer”. If the “programmer”class is inherited from the “employee” class which means that the “programmer” class 
can now implement the functionalities of the “employee” class.*/
{
    int data1;
    public: 
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 =10;
    data2 =20;
}
int Base ::getData1()
 {
    return data1;
 }
int Base ::getData2()
 {
    return data2;
 }
   class Derived : private Base
   {
//     class is being derived publically;
int data3;
public :
 void process();
 void display();
 };
 void  Derived :: process(){
    setData();
    data3 = data2*getData1();
}
 void Derived:: display ()
 {cout<<" value of data1 is " << getData1() <<endl;   
 cout<<" value of data2 is " << data2 <<endl;   
 cout<<" value of data3 is " << data3 <<endl;   }
int main(){
     Derived der;
    //  der.setData();  // this line is not called bcz setdata is in process
     der.process();
     der.display ();
    return 0;
}