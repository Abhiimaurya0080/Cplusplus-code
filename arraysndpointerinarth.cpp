#include<iostream>
using namespace std;
int main(){

    int marks[] {23,25,28,29};
     int mathMarks[4];
     mathMarks[0] =4512;
     mathMarks[1] = 444;
     mathMarks[2] = 666;
     mathMarks[3] = 888;

     cout<<"These are math marks"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

      // you can change the value of an array
       marks [2] = 142  ;
 cout<<"These are marks "<<endl;
// cout<<marks[0]<<endl;                   
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;                   
// cout<<marks[3]<<endl;

   for (int i = 0; i < 4; i++)

   {
    cout<<"These are the value of "<<marks[i]<<endl;
   }

     // POINTERS AND ARRAYS
     int *p = marks ;
     cout<<"The value of marks [0] is "<<*p<<endl;
     cout<<"The value of marks [0] is "<<*(p+1)<<endl;
     cout<<"The value of marks [0] is "<<*(p+2)<<endl;
     cout<<"The value of marks [0] is "<<*(p+3)<<endl;
   
return 0; 
}   