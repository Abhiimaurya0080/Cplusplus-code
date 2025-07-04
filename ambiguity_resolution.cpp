#include<iostream>
using namespace std;
class Base1 {
  public:
  void greet (){
 cout<<"How are you?"<<endl;   /* one class is derived for two or more base class then there are chance that 
                                  the base classes have functiobns with same name , so it will be confused  then we use ambiguity resolution .. */

        }
        };
 class Base2{
    public:
    void greet(){
  cout<< "kaise ho?"<<endl;
     }
    }; 
class Derived : public Base1 , public Base2{

    int a;
    public:
    void greet(){
        Base2::greet();
    }

} ;     
    int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
//    Derived.d;
    Derived d;
    d.greet();
    
    return 0;
}