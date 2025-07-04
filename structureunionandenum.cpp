#include<iostream>
using namespace std;
    //                    // structrure 
    // struct employee
    // {
    //     int eId;
    //     char favChar;
    //      float salary;
            // union 
            union money 
             { 
                int rice;
             char car;
             float pounds;
             
    };  
    int main (){
        // union money m1;  // only one value put in one time compile the program 
        // m1.car =  'c' ;
        // cout<<m1.car;
          enum meal { breakfast , lunch , dinner };
          cout<<breakfast<<endl;
          cout<<lunch<<endl;
          cout<<dinner<<endl;

        // struct employee melon;
        // melon .eId = 0512;
        // melon .favChar = 'i';
        // melon.salary = 1250;
        // cout<<"The value is "<<melon.eId<<endl;
        // cout<<"The value is "<<melon.favChar<<endl;
        // cout<<"The value is "<<melon.salary<<endl;

    return 0;
    }