// this is private _variable but can be inherited|
    // for a protected member :
 
    /*                     Public Derivation     Private Derivation     Protected Derivation 
     Private Member        Not Inherited         Not Inherited          Not Inherited
     Protected Member      Protected             Private                Protected
     Public Member         Public                Private                Protected

       Define :  protected access modifiers are similar to the private accs. modifiers but protected accs. modofiers can be accesed 
       in  the derived class where as private accs. modifiers can't be accessed in the derived class ;
     */

     #include<iostream>
     using namespace std;
      class Base{ 
        protected:
        int a;
        private :
        int b; 
     };
       class Derived : protected Base{};
     int main(){
         Base b;
         Derived d;
        //   cout<"d.a" will not work since a is protected in both base as well as derived class 
        return 0;
     }