#include<iostream>
using namespace std;
int main(){
    // what is pointer/ -------->> data types which  hold the address of other data types .
      
      int a = 3;
      int*b = &a;
        //&------>> (Addresss of) operator
          cout<< "The address of a is "<<&a<<endl;
       cout<< "The address of a is "<<b<<endl;

       //*---> (value at ) deference operator 
       cout<<"The value at address b is "<<*b<<endl;


       // pointer to pointer 
       int** c = &b;
       cout<<"The addressof b is "<<&b<<endl;
       cout<<"The addressof b is "<<c<<endl;
       cout<<"The  value at addressof c is "<<*c<<endl;
       cout<<"The  value at address value_at (value_at(c))  is b is "<<**c<<endl;

    return 0 ;
}