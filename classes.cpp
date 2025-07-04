#include<iostream>
using namespace std;
class Employee
{
     private:
        int a, b, c ;
     public:
        int d, e;

        void setData (int a1, int b1, int c1);// declaration
        void getData (){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
          
          void Employee:: setData(int a1, int b1 ,int c1){
            a = a1;
            b = b1;
            c = c1;
          }
int main(){
    Employee shalu;
    //shalu.a = 134;---> This will throw errror as a is  private.
         shalu.d = 34;
         shalu.e = 89;
         shalu.setData(1,2,4);
         shalu.getData(); 
    return 0;
}
  //  class has the same work of structure but we cannnot hide data in structure means everthing  is public and can be acessed. So we use class 