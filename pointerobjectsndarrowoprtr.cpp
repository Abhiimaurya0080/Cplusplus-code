#include<iostream>
using namespace std;
class Complex {     
     int real ,imaginary ;
     public :
     void getData (){
        cout<<" The real part is "<<real<<endl;
        cout<<" The imaginary part is "<<imaginary<<endl;
     }
      void setData( int a , int b ){
        real = a;
        imaginary = b;
      } };                /* user of pointer or arrow operator and array of object is same store the address of variable */
int main (){
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(5,12);   
    (*ptr).setData(5,12) ;   
    (*ptr).getData ();

    // using arrow operator
    Complex *ptr2 = &c1;
    ptr2->setData(5, 12);
    ptr2->getData();

     // using arrow of object
     Complex*ptr3 = new Complex;
     new Complex[4];
     ptr3->setData(5,12);
     ptr3->getData();
    return 0;
}