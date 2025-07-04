#include<iostream>
using namespace std;
/* base class */
 class Employee{ /* inheritance is a process of inheriting sytntax and 
     attributes of the base class by a derived class.*/
    public:
    int id ;
    float salary ;
    Employee(int inpId)
    {
        id= inpId;
        salary = 34.0;
    }
    Employee(){}
       
};
// derived class syntax
/* class {{derived class name}} : {{visibility - mode}} {{base-class-name}} 
  class members/methods/ etc */;
/*   
Note:-
1. Derfault visibility mode is private;
2. Public visibility Mode: public member of the base class become public members of the derived class;
2. Private visibility Mode: public member of the base class become private members of the derived class;
4. private member are never inherited ;*/
//  Creating a progammer class derived from employee base class;
class programmer: public Employee{
  public:
   int languagecode;
   programmer( int inpId)
   {
    id = inpId;
     salary=34;
    languagecode=9;
   }
   void getData(){
    cout<<id<<endl;
   }
};
 
int main(){
     Employee rohan(1),shalu(2);
     cout<<rohan.salary<<endl;
     cout<<shalu.salary<<endl;
     programmer skillF(10);
     cout<<skillF.languagecode<<endl;
     cout<<skillF.id<<endl;
    skillF.getData();    
    return 0;
}